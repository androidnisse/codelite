#include "mdparser.hpp"
#include "wx/string.h"
#include <cctype>
#include <iostream>
#include <memory>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <unordered_map>
#include <unordered_set>
#include <vector>

wxChar mdparser::Tokenizer::safe_get_char(size_t pos) const
{
    if(pos >= m_text.length()) {
        return 0;
    }
    return m_text[pos];
}

std::pair<mdparser::Type, wxChar> mdparser::Tokenizer::next()
{
    while(m_pos < m_text.length()) {
        wxChar ch0 = m_text[m_pos];
        wxChar ch1 = safe_get_char(m_pos + 1);
        wxChar ch2 = safe_get_char(m_pos + 2);
        ++m_pos;
        switch(ch0) {
        case '\n':
            return { T_EOL, 0 };
        case '*':
            // bold & italic
            if(ch1 == '*') {
                m_pos += 1;
                return { T_BOLD, 0 };
            } else {
                return { T_ITALIC, 0 };
            }
            break;
        case '`':
            // code blocks ``` & `
            if(ch1 == '`' && ch2 == '`') {
                m_pos += 2;
                return { T_CODEBLOCK, 0 };
            } else {
                return { T_CODE, 0 };
            }
            break;
        case '#':
            // Heading, up to 3 x #
            if(ch1 == '#' && ch2 == '#') {
                m_pos += 2;
                return { T_H3, 0 };
            } else if(ch1 == '#') {
                m_pos += 1;
                return { T_H2, 0 };
            } else {
                return { T_H1, 0 };
            }
            break;
        case '=':
            if(ch1 == '=' && ch2 == '=') {
                m_pos += 2;
                return { T_HR, 0 };
            } else {
                return { T_TEXT, ch0 };
            }
        case '-':
            if(ch1 == '-' && ch2 == '-') {
                m_pos += 2;
                return { T_HR, 0 };
            } else if(ch1 != '-') {
                return { T_LI, 0 };
            } else {
                return { T_TEXT, ch0 };
            }
            break;
        default:
            return { T_TEXT, ch0 };
        }
    }
    return { T_EOF, 0 };
}

void mdparser::Parser::parse(const wxString& input_str, write_callback_t on_write)
{
    constexpr int STATE_NORMAL = 0;
    constexpr int STATE_CODEBLOCK = 1;
    int state = STATE_NORMAL;

    write_cb = std::move(on_write);
    Tokenizer tokenizer(input_str);
    Style style;
    Type last_state = T_EOF;
    wxString buffer;
    while(true) {
        auto tok = tokenizer.next();
        if(tok.first == T_EOF) {
            flush_buffer(buffer, style, false);
            break;
        }

        switch(state) {
        case STATE_NORMAL:
            switch(tok.first) {
            case T_LI:
                if(last_state == T_EOL || last_state == T_EOF) {
                    buffer << L"\u2022"; // bullet
                } else {
                    buffer << "-";
                }
                break;
                // below are style styles
            case T_BOLD:
            case T_ITALIC:
            case T_CODE:
                flush_buffer(buffer, style, false);
                style.toggle_property(tok.first);
                break;
            case T_H1:
            case T_H2:
            case T_H3:
                if(last_state == T_EOL || last_state == T_EOF) {
                    flush_buffer(buffer, style, false);
                    style.toggle_property(tok.first);
                } else {
                    // handle it as text
                    buffer << tok.second;
                }
                break;
            case T_CODEBLOCK:
                state = STATE_CODEBLOCK;
                flush_buffer(buffer, style, false);
                style.toggle_property(tok.first);
                break;
            case T_EOL:
                // clear heading
                flush_buffer(buffer, style, true);
                style.clear_property(T_H1);
                style.clear_property(T_H2);
                style.clear_property(T_H3);
                break;
            case T_TEXT:
                buffer << tok.second;
                break;
            case T_HR:
                flush_buffer(buffer, style, false);
                notify_hr();
                break;
            case T_EOF:
                break;
            }
            break;
        case STATE_CODEBLOCK:
            switch(tok.first) {
            case T_CODEBLOCK:
                state = STATE_NORMAL;
                flush_buffer(buffer, style, false);
                style.toggle_property(T_CODEBLOCK);
                break;
            case T_EOL:
                flush_buffer(buffer, style, true);
                break;
            default:
                if(buffer.empty() && tok.second == '\n') {
                    // skip it
                } else {
                    buffer << tok.second;
                }
                break;
            }
        }

        if(tok.first == T_TEXT && (tok.second == ' ' || tok.second == '\t')) {
            // dont change the lasta seen state for whitespace
            continue;
        }
        last_state = tok.first;
    }
}

void mdparser::Parser::flush_buffer(wxString& buffer, const Style& style, bool is_eol)
{
    if(!buffer.empty() || is_eol) {
        write_cb(buffer, style, is_eol);
    }
    buffer.clear();
}

void mdparser::Parser::notify_hr()
{
    Style style;
    style.toggle_property(T_HR);
    write_cb("", style, true);
}

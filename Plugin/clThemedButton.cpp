#include "clThemedButton.h"
#include "event_notifier.h"
#include "codelite_events.h"
#include "ColoursAndFontsManager.h"
#include "clSystemSettings.h"
#include "cl_config.h"

clThemedButton::clThemedButton() {}

bool clThemedButton::Create(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos,
                            const wxSize& size, long style, const wxValidator& validator, const wxString& name)
{
    bool res = clButton::Create(parent, id, label, pos, size, style, validator, name);
    if(res) {
        EventNotifier::Get()->Bind(wxEVT_SYS_COLOURS_CHANGED, &clThemedButton::OnThemeChanged, this);
        ApplyTheme();
    }

    return res;
}

clThemedButton::clThemedButton(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos,
                               const wxSize& size, long style, const wxValidator& validator, const wxString& name)
    : clButton(parent, id, label, pos, size, style, validator, name)
{
    EventNotifier::Get()->Bind(wxEVT_SYS_COLOURS_CHANGED, &clThemedButton::OnThemeChanged, this);
    ApplyTheme();
}

clThemedButton::~clThemedButton()
{
    EventNotifier::Get()->Unbind(wxEVT_SYS_COLOURS_CHANGED, &clThemedButton::OnThemeChanged, this);
}

void clThemedButton::OnThemeChanged(clCommandEvent& event)
{
    event.Skip();
    ApplyTheme();
}

void clThemedButton::ApplyTheme()
{
#if !wxUSE_NATIVE_BUTTON
    clColours colours;
    colours.InitFromColour(clSystemSettings::GetColour(wxSYS_COLOUR_3DFACE));
    SetColours(colours);
#endif
}

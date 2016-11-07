#ifndef TAILPANEL_H
#define TAILPANEL_H

#include "TailUI.h"
#include "clFileSystemWatcher.h"
#include <wx/filename.h>
#include <vector>
#include "clFileSystemEvent.h"
#include "clEditorEditEventsHandler.h"
#include <map>

class Tail;
class TailPanel : public TailPanelBase
{
    clFileSystemWatcher::Ptr_t m_fileWatcher;
    wxFileName m_file;
    size_t m_lastPos;
    clEditEventsHandler::Ptr_t m_editEvents;
    std::map<int, wxString> m_recentItemsMap;
    Tail* m_plugin;
    bool m_isDetached;

protected:
    virtual void OnDetachWindow(wxCommandEvent& event);
    virtual void OnDetachWindowUI(wxUpdateUIEvent& event);
    virtual void OnOpen(wxAuiToolBarEvent& event);
    virtual void OnClear(wxCommandEvent& event);
    virtual void OnClearUI(wxUpdateUIEvent& event);
    virtual void OnClose(wxCommandEvent& event);
    virtual void OnCloseUI(wxUpdateUIEvent& event);
    void OnOpenRecentItem(wxCommandEvent& event);

private:
    void DoClear();
    void DoOpen(const wxString& filename);
    void DoAppendText(const wxString& text);
    void DoPrepareRecentItemsMenu(wxMenu& menu);

public:
    TailPanel(wxWindow* parent, Tail* plugin);
    virtual ~TailPanel();

    void SetIsDetached(bool isDetached) { this->m_isDetached = isDetached; }
    bool IsDetached() const { return m_isDetached; }

protected:
    virtual void OnPause(wxCommandEvent& event);
    virtual void OnPauseUI(wxUpdateUIEvent& event);
    virtual void OnPlay(wxCommandEvent& event);
    virtual void OnPlayUI(wxUpdateUIEvent& event);
    void OnFileModified(clFileSystemEvent& event);
    void OnThemeChanged(wxCommandEvent& event);
};
#endif // TAILPANEL_H

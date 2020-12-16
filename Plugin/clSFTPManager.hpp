#ifndef CLSFTPMANAGER_HPP
#define CLSFTPMANAGER_HPP

#include "cl_command_event.h"
#include "cl_sftp.h"
#include "codelite_exports.h"
#include <unordered_map>
#include <wx/event.h>
#include <wx/string.h>

class IEditor;
class SFTPClientData;
class WXDLLIMPEXP_SDK clSFTPManager : public wxEvtHandler
{
    std::unordered_map<wxString, std::pair<SSHAccountInfo, clSFTP::Ptr_t>> m_connections;

protected:
    std::pair<SSHAccountInfo, clSFTP::Ptr_t> GetConnection(const wxString& account) const;

protected:
    void OnDebugEnded(clDebugEvent& event);
    void OnDebugStarted(clDebugEvent& event);
    SFTPClientData* GetSFTPClientData(IEditor* editor);

public:
    clSFTPManager();
    virtual ~clSFTPManager();

    static clSFTPManager& Get();
    void Release();

    /**
     * @brief add new connection to the manager. if a connection for this account already exists and 'replace' is set to
     * true, replace it
     */
    bool AddConnection(const SSHAccountInfo& account, bool replace = false);
    IEditor* OpenFile(const wxString& path, const wxString& accountName);
    IEditor* OpenFile(const wxString& path, const SSHAccountInfo& accountInfo);
};

#endif // CLSFTPMANAGER_HPP

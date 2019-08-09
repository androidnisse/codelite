//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter_plugin.h"
#include "codelite_exports.h"

// Declare the bitmap loading function
extern void wxC9D6CInitBitmapResources();

static bool bBitmapLoaded = false;

EditDlgBase::EditDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size,
                         long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);

    m_stc10 = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stc10->SetFocus();
    // Configure the fold margin
    m_stc10->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stc10->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stc10->SetMarginSensitive(4, true);
    m_stc10->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stc10->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stc10->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stc10->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stc10->SetMarginWidth(2, 0);
    m_stc10->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    m_stc10->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc10->SetMarginWidth(0, 0);

    // Configure the line symbol margin
    m_stc10->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc10->SetMarginMask(3, 0);
    m_stc10->SetMarginWidth(3, 0);
    // Select the lexer
    m_stc10->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stc10->StyleClearAll();
    m_stc10->SetWrapMode(0);
    m_stc10->SetIndentationGuides(0);
    m_stc10->SetKeyWords(0, wxT(""));
    m_stc10->SetKeyWords(1, wxT(""));
    m_stc10->SetKeyWords(2, wxT(""));
    m_stc10->SetKeyWords(3, wxT(""));
    m_stc10->SetKeyWords(4, wxT(""));

    boxSizer2->Add(m_stc10, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer4 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer2->Add(boxSizer4, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_button6 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button6->SetDefault();

    boxSizer4->Add(m_button6, 0, wxALL, WXC_FROM_DIP(5));

    m_button8 = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer4->Add(m_button8, 0, wxALL, WXC_FROM_DIP(5));

    SetName(wxT("EditDlgBase"));
    SetMinClientSize(wxSize(300, 300));
    SetSize(wxDLG_UNIT(this, wxSize(300, 300)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
}

EditDlgBase::~EditDlgBase() {}

DiffSideBySidePanelBase::DiffSideBySidePanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos,
                                                 const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer13 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer13);

    wxBoxSizer* boxSizer314 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer13->Add(boxSizer314, 1, wxEXPAND, WXC_FROM_DIP(0));

    m_splitter = new clThemedSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                            wxSP_LIVE_UPDATE | wxSP_PERMIT_UNSPLIT | wxSP_3DSASH);
    m_splitter->SetSashGravity(0.5);
    m_splitter->SetMinimumPaneSize(10);

    boxSizer314->Add(m_splitter, 1, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_splitterPageLeft =
        new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_splitter, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    wxBoxSizer* boxSizer111 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageLeft->SetSizer(boxSizer111);

    wxBoxSizer* boxSizer285 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer111->Add(boxSizer285, 0, wxEXPAND, WXC_FROM_DIP(2));

    m_textCtrlLeftFile = new wxTextCtrl(m_splitterPageLeft, wxID_ANY, wxT(""), wxDefaultPosition,
                                        wxDLG_UNIT(m_splitterPageLeft, wxSize(-1, -1)), 0);
    m_textCtrlLeftFile->SetFocus();
#if wxVERSION_NUMBER >= 3000
    m_textCtrlLeftFile->SetHint(wxT(""));
#endif
    m_textCtrlLeftFile->AutoCompleteFileNames();

    boxSizer285->Add(m_textCtrlLeftFile, 1, wxALL | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_button290 = new wxButton(m_splitterPageLeft, wxID_ANY, _("..."), wxDefaultPosition,
                               wxDLG_UNIT(m_splitterPageLeft, wxSize(-1, -1)), wxBU_EXACTFIT);
    m_button290->SetToolTip(_("Choose a file"));

    boxSizer285->Add(m_button290, 0, wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer310 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer111->Add(boxSizer310, 1, wxEXPAND, WXC_FROM_DIP(0));

    m_stcLeft = new wxStyledTextCtrl(m_splitterPageLeft, wxID_ANY, wxDefaultPosition,
                                     wxDLG_UNIT(m_splitterPageLeft, wxSize(500, 300)), wxBORDER_NONE);
    // Configure the fold margin
    m_stcLeft->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcLeft->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcLeft->SetMarginSensitive(4, true);
    m_stcLeft->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcLeft->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcLeft->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcLeft->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcLeft->SetMarginWidth(2, 16);
    m_stcLeft->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    m_stcLeft->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcLeft->SetMarginWidth(0, 0);

    // Configure the line symbol margin
    m_stcLeft->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcLeft->SetMarginMask(3, 0);
    m_stcLeft->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcLeft->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcLeft->StyleClearAll();
    m_stcLeft->SetWrapMode(0);
    m_stcLeft->SetIndentationGuides(0);
    m_stcLeft->SetKeyWords(0, wxT(""));
    m_stcLeft->SetKeyWords(1, wxT(""));
    m_stcLeft->SetKeyWords(2, wxT(""));
    m_stcLeft->SetKeyWords(3, wxT(""));
    m_stcLeft->SetKeyWords(4, wxT(""));

    boxSizer310->Add(m_stcLeft, 1, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_panelOverviewL = new wxPanel(m_splitterPageLeft, wxID_ANY, wxDefaultPosition,
                                   wxDLG_UNIT(m_splitterPageLeft, wxSize(6, -1)), wxTAB_TRAVERSAL);

    boxSizer310->Add(m_panelOverviewL, 0, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_staticTextLeft = new wxStaticText(m_splitterPageLeft, wxID_ANY, wxT(""), wxDefaultPosition,
                                        wxDLG_UNIT(m_splitterPageLeft, wxSize(-1, -1)), wxALIGN_CENTRE | wxBORDER_NONE);

    boxSizer111->Add(m_staticTextLeft, 0, wxALL | wxEXPAND | wxALIGN_LEFT, WXC_FROM_DIP(2));

    m_splitterPageRight =
        new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_splitter, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_splitter->SplitVertically(m_splitterPageLeft, m_splitterPageRight, 0);

    wxBoxSizer* boxSizer113 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageRight->SetSizer(boxSizer113);

    wxBoxSizer* boxSizer286 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer113->Add(boxSizer286, 0, wxEXPAND, WXC_FROM_DIP(2));

    m_textCtrlRightFile = new wxTextCtrl(m_splitterPageRight, wxID_ANY, wxT(""), wxDefaultPosition,
                                         wxDLG_UNIT(m_splitterPageRight, wxSize(-1, -1)), 0);
#if wxVERSION_NUMBER >= 3000
    m_textCtrlRightFile->SetHint(wxT(""));
#endif
    m_textCtrlRightFile->AutoCompleteFileNames();

    boxSizer286->Add(m_textCtrlRightFile, 1, wxALL | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_button294 = new wxButton(m_splitterPageRight, wxID_ANY, _("..."), wxDefaultPosition,
                               wxDLG_UNIT(m_splitterPageRight, wxSize(-1, -1)), wxBU_EXACTFIT);

    boxSizer286->Add(m_button294, 0, wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer307 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer113->Add(boxSizer307, 1, wxEXPAND, WXC_FROM_DIP(0));

    m_stcRight = new wxStyledTextCtrl(m_splitterPageRight, wxID_ANY, wxDefaultPosition,
                                      wxDLG_UNIT(m_splitterPageRight, wxSize(-1, -1)), wxBORDER_NONE);
    // Configure the fold margin
    m_stcRight->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcRight->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcRight->SetMarginSensitive(4, true);
    m_stcRight->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcRight->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcRight->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcRight->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcRight->SetMarginWidth(2, 16);
    m_stcRight->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    m_stcRight->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcRight->SetMarginWidth(0, 0);

    // Configure the line symbol margin
    m_stcRight->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcRight->SetMarginMask(3, 0);
    m_stcRight->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcRight->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcRight->StyleClearAll();
    m_stcRight->SetWrapMode(0);
    m_stcRight->SetIndentationGuides(0);
    m_stcRight->SetKeyWords(0, wxT(""));
    m_stcRight->SetKeyWords(1, wxT(""));
    m_stcRight->SetKeyWords(2, wxT(""));
    m_stcRight->SetKeyWords(3, wxT(""));
    m_stcRight->SetKeyWords(4, wxT(""));

    boxSizer307->Add(m_stcRight, 1, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_panelOverviewR = new wxPanel(m_splitterPageRight, wxID_ANY, wxDefaultPosition,
                                   wxDLG_UNIT(m_splitterPageRight, wxSize(6, -1)), wxTAB_TRAVERSAL);

    boxSizer307->Add(m_panelOverviewR, 0, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    m_staticTextRight =
        new wxStaticText(m_splitterPageRight, wxID_ANY, wxT(""), wxDefaultPosition,
                         wxDLG_UNIT(m_splitterPageRight, wxSize(-1, -1)), wxALIGN_CENTRE | wxBORDER_NONE);

    boxSizer113->Add(m_staticTextRight, 0, wxALL | wxEXPAND | wxALIGN_LEFT, WXC_FROM_DIP(2));

    m_panelOverviewFull =
        new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(6, -1)), wxTAB_TRAVERSAL);

    boxSizer314->Add(m_panelOverviewFull, 0, wxALL | wxEXPAND, WXC_FROM_DIP(2));

    SetName(wxT("DiffSideBySidePanelBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_textCtrlLeftFile->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnLeftPickerUI), NULL,
                                this);
    m_button290->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnLeftPickerUI), NULL, this);
    m_button290->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DiffSideBySidePanelBase::OnBrowseLeftFile),
                         NULL, this);
    m_stcLeft->Connect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnLeftStcPainted), NULL,
                       this);
    m_stcLeft->Connect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(DiffSideBySidePanelBase::OnMouseWheel), NULL, this);
    m_panelOverviewL->Connect(wxEVT_ERASE_BACKGROUND,
                              wxEraseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewEraseBackground), NULL, this);
    m_panelOverviewL->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewLeftDown),
                              NULL, this);
    m_textCtrlRightFile->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnRightPickerUI),
                                 NULL, this);
    m_button294->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnRightPickerUI), NULL, this);
    m_button294->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                         wxCommandEventHandler(DiffSideBySidePanelBase::OnBrowseRightFile), NULL, this);
    m_stcRight->Connect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnRightStcPainted), NULL,
                        this);
    m_stcRight->Connect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(DiffSideBySidePanelBase::OnMouseWheel), NULL, this);
    m_panelOverviewR->Connect(wxEVT_ERASE_BACKGROUND,
                              wxEraseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewEraseBackground), NULL, this);
    m_panelOverviewR->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewLeftDown),
                              NULL, this);
    m_panelOverviewFull->Connect(wxEVT_ERASE_BACKGROUND,
                                 wxEraseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewEraseBackground), NULL,
                                 this);
    m_panelOverviewFull->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewLeftDown),
                                 NULL, this);
}

DiffSideBySidePanelBase::~DiffSideBySidePanelBase()
{
    m_textCtrlLeftFile->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnLeftPickerUI),
                                   NULL, this);
    m_button290->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnLeftPickerUI), NULL,
                            this);
    m_button290->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                            wxCommandEventHandler(DiffSideBySidePanelBase::OnBrowseLeftFile), NULL, this);
    m_stcLeft->Disconnect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnLeftStcPainted), NULL,
                          this);
    m_stcLeft->Disconnect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(DiffSideBySidePanelBase::OnMouseWheel), NULL, this);
    m_panelOverviewL->Disconnect(wxEVT_ERASE_BACKGROUND,
                                 wxEraseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewEraseBackground), NULL,
                                 this);
    m_panelOverviewL->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewLeftDown),
                                 NULL, this);
    m_textCtrlRightFile->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnRightPickerUI),
                                    NULL, this);
    m_button294->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(DiffSideBySidePanelBase::OnRightPickerUI), NULL,
                            this);
    m_button294->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                            wxCommandEventHandler(DiffSideBySidePanelBase::OnBrowseRightFile), NULL, this);
    m_stcRight->Disconnect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnRightStcPainted),
                           NULL, this);
    m_stcRight->Disconnect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(DiffSideBySidePanelBase::OnMouseWheel), NULL, this);
    m_panelOverviewR->Disconnect(wxEVT_ERASE_BACKGROUND,
                                 wxEraseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewEraseBackground), NULL,
                                 this);
    m_panelOverviewR->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewLeftDown),
                                 NULL, this);
    m_panelOverviewFull->Disconnect(wxEVT_ERASE_BACKGROUND,
                                    wxEraseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewEraseBackground), NULL,
                                    this);
    m_panelOverviewFull->Disconnect(wxEVT_LEFT_DOWN,
                                    wxMouseEventHandler(DiffSideBySidePanelBase::OnPaneloverviewLeftDown), NULL, this);
}

clGetTextFromUserBaseDialog::clGetTextFromUserBaseDialog(wxWindow* parent, wxWindowID id, const wxString& title,
                                                         const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer135 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer135);

    m_staticTextCaption =
        new wxStaticText(this, wxID_ANY, _("Caption"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    boxSizer135->Add(m_staticTextCaption, 0, wxALL, WXC_FROM_DIP(5));

    m_textCtrl = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(300, -1)), 0);
    m_textCtrl->SetFocus();
#if wxVERSION_NUMBER >= 3000
    m_textCtrl->SetHint(wxT(""));
#endif

    boxSizer135->Add(m_textCtrl, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    boxSizer135->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));

    m_stdBtnSizer137 = new wxStdDialogButtonSizer();

    boxSizer135->Add(m_stdBtnSizer137, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer137->AddButton(m_buttonCancel);

    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer137->AddButton(m_buttonOK);
    m_stdBtnSizer137->Realize();

    SetName(wxT("clGetTextFromUserBaseDialog"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
}

clGetTextFromUserBaseDialog::~clGetTextFromUserBaseDialog() {}

clTreeCtrlPanelBase::clTreeCtrlPanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
                                         long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer151 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer151);

    m_treeCtrl = new clFileViewerTreeCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                          wxTR_DEFAULT_STYLE | wxTR_MULTIPLE | wxTR_HIDE_ROOT |
                                              wxTR_FULL_ROW_HIGHLIGHT | wxTR_NO_LINES);

    boxSizer151->Add(m_treeCtrl, 1, wxALL | wxEXPAND, WXC_FROM_DIP(0));

    SetName(wxT("clTreeCtrlPanelBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(clTreeCtrlPanelBase::OnItemExpanding),
                        NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler(clTreeCtrlPanelBase::OnItemActivated),
                        NULL, this);
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(clTreeCtrlPanelBase::OnContextMenu), NULL,
                        this);
}

clTreeCtrlPanelBase::~clTreeCtrlPanelBase()
{
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_EXPANDING, wxTreeEventHandler(clTreeCtrlPanelBase::OnItemExpanding),
                           NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler(clTreeCtrlPanelBase::OnItemActivated),
                           NULL, this);
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler(clTreeCtrlPanelBase::OnContextMenu), NULL,
                           this);
}

NotebookNavigationDlgBase::NotebookNavigationDlgBase(wxWindow* parent, wxWindowID id, const wxString& title,
                                                     const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer157 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer157);

    m_panel161 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                             wxWANTS_CHARS | wxTAB_TRAVERSAL);

    boxSizer157->Add(m_panel161, 1, wxEXPAND, WXC_FROM_DIP(0));

    wxBoxSizer* boxSizer163 = new wxBoxSizer(wxVERTICAL);
    m_panel161->SetSizer(boxSizer163);

    m_dvListCtrl = new clThemedListCtrl(m_panel161, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel161, wxSize(-1, -1)),
                                        wxDV_NO_HEADER | wxDV_ROW_LINES | wxDV_SINGLE | wxWANTS_CHARS |
                                            wxTAB_TRAVERSAL | wxBORDER_STATIC);
    m_dvListCtrl->SetFocus();

    boxSizer163->Add(m_dvListCtrl, 1, wxEXPAND, WXC_FROM_DIP(2));

    m_dvListCtrl->AppendTextColumn(_("Modified"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(30), wxALIGN_CENTER,
                                   wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrl->AppendIconTextColumn(_("Text"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                       wxDATAVIEW_COL_RESIZABLE);

    SetName(wxT("NotebookNavigationDlgBase"));
    SetMinClientSize(wxSize(400, 200));
    SetSize(wxDLG_UNIT(this, wxSize(400, 200)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    this->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(NotebookNavigationDlgBase::OnKeyDown), NULL, this);
    this->Connect(wxEVT_KEY_UP, wxKeyEventHandler(NotebookNavigationDlgBase::OnKeyUp), NULL, this);
    m_dvListCtrl->Connect(wxEVT_KEY_UP, wxKeyEventHandler(NotebookNavigationDlgBase::OnKeyUp), NULL, this);
    m_dvListCtrl->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(NotebookNavigationDlgBase::OnKeyDown), NULL, this);
    m_dvListCtrl->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                          wxDataViewEventHandler(NotebookNavigationDlgBase::OnItemActivated), NULL, this);
}

NotebookNavigationDlgBase::~NotebookNavigationDlgBase()
{
    this->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(NotebookNavigationDlgBase::OnKeyDown), NULL, this);
    this->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(NotebookNavigationDlgBase::OnKeyUp), NULL, this);
    m_dvListCtrl->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(NotebookNavigationDlgBase::OnKeyUp), NULL, this);
    m_dvListCtrl->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(NotebookNavigationDlgBase::OnKeyDown), NULL, this);
    m_dvListCtrl->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                             wxDataViewEventHandler(NotebookNavigationDlgBase::OnItemActivated), NULL, this);
}

clTreeCtrlPanelDefaultPageBase::clTreeCtrlPanelDefaultPageBase(wxWindow* parent, wxWindowID id, const wxPoint& pos,
                                                               const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer167 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer167);

    m_panel169 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                             wxTAB_TRAVERSAL | wxBORDER_NONE);
    m_panel169->SetBackgroundColour(wxColour(wxT("rgb(220,220,220)")));

    boxSizer167->Add(m_panel169, 1, wxALL | wxEXPAND, WXC_FROM_DIP(0));

    wxBoxSizer* boxSizer171 = new wxBoxSizer(wxVERTICAL);
    m_panel169->SetSizer(boxSizer171);

    boxSizer171->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));

    m_staticText177 = new wxStaticText(m_panel169, wxID_ANY, _("DRAG AND DROP\nA FOLDER HERE"), wxDefaultPosition,
                                       wxDLG_UNIT(m_panel169, wxSize(-1, -1)), wxALIGN_CENTRE);
    m_staticText177->SetForegroundColour(wxColour(wxT("rgb(128,128,128)")));
    wxFont m_staticText177Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticText177Font.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText177->SetFont(m_staticText177Font);

    boxSizer171->Add(m_staticText177, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));

    boxSizer171->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));

    SetName(wxT("clTreeCtrlPanelDefaultPageBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_panel169->Connect(wxEVT_CONTEXT_MENU,
                        wxContextMenuEventHandler(clTreeCtrlPanelDefaultPageBase::OnDefaultPageContextMenu), NULL,
                        this);
}

clTreeCtrlPanelDefaultPageBase::~clTreeCtrlPanelDefaultPageBase()
{
    m_panel169->Disconnect(wxEVT_CONTEXT_MENU,
                           wxContextMenuEventHandler(clTreeCtrlPanelDefaultPageBase::OnDefaultPageContextMenu), NULL,
                           this);
}

clSingleChoiceDialogBase::clSingleChoiceDialogBase(wxWindow* parent, wxWindowID id, const wxString& title,
                                                   const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer181 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer181);

    m_searchCtrl = new wxSearchCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                    wxTE_PROCESS_ENTER);
    m_searchCtrl->SetToolTip(_("Filter the results.\nHit ENTER to apply the filter"));
    m_searchCtrl->SetFocus();
    m_searchCtrl->ShowSearchButton(true);
    m_searchCtrl->ShowCancelButton(false);

    boxSizer181->Add(m_searchCtrl, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrl = new wxDataViewListCtrl(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                          wxDV_NO_HEADER | wxDV_ROW_LINES | wxDV_SINGLE);

    boxSizer181->Add(m_dvListCtrl, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrl->AppendTextColumn(_("My Column"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                   wxDATAVIEW_COL_RESIZABLE);
    m_stdBtnSizer183 = new wxStdDialogButtonSizer();

    boxSizer181->Add(m_stdBtnSizer183, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));

    m_button185 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button185->SetDefault();
    m_stdBtnSizer183->AddButton(m_button185);

    m_button187 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer183->AddButton(m_button187);
    m_stdBtnSizer183->Realize();

    SetName(wxT("clSingleChoiceDialogBase"));
    SetMinClientSize(wxSize(400, 300));
    SetSize(wxDLG_UNIT(this, wxSize(400, 300)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_searchCtrl->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(clSingleChoiceDialogBase::OnFilter), NULL,
                          this);
    m_dvListCtrl->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                          wxDataViewEventHandler(clSingleChoiceDialogBase::OnActivated), NULL, this);
    m_button185->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(clSingleChoiceDialogBase::OnOKUI), NULL, this);
}

clSingleChoiceDialogBase::~clSingleChoiceDialogBase()
{
    m_searchCtrl->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(clSingleChoiceDialogBase::OnFilter), NULL,
                             this);
    m_dvListCtrl->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                             wxDataViewEventHandler(clSingleChoiceDialogBase::OnActivated), NULL, this);
    m_button185->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(clSingleChoiceDialogBase::OnOKUI), NULL, this);
}

clImageViewerBase::clImageViewerBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
                                     long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer194 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer194);

    m_scrollWin196 = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                          wxBORDER_NONE | wxHSCROLL | wxVSCROLL);
    m_scrollWin196->SetScrollRate(5, 5);

    boxSizer194->Add(m_scrollWin196, 1, wxEXPAND, WXC_FROM_DIP(2));

    wxBoxSizer* boxSizer198 = new wxBoxSizer(wxVERTICAL);
    m_scrollWin196->SetSizer(boxSizer198);

    boxSizer198->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));

    m_staticBitmap = new wxStaticBitmap(m_scrollWin196, wxID_ANY, wxNullBitmap, wxDefaultPosition,
                                        wxDLG_UNIT(m_scrollWin196, wxSize(-1, -1)), 0);

    boxSizer198->Add(m_staticBitmap, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));

    boxSizer198->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));

    SetName(wxT("clImageViewerBase"));
    SetSize(wxDLG_UNIT(this, wxSize(500, 300)));
    if(GetSizer()) { GetSizer()->Fit(this); }
}

clImageViewerBase::~clImageViewerBase() {}

clEditorBarBase::clEditorBarBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer346 = new wxBoxSizer(wxHORIZONTAL);
    this->SetSizer(boxSizer346);

    wxFlexGridSizer* flexGridSizer374 = new wxFlexGridSizer(0, 3, 0, 0);
    flexGridSizer374->SetFlexibleDirection(wxBOTH);
    flexGridSizer374->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

    boxSizer346->Add(flexGridSizer374, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_buttonScope =
        new clThemedButton(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(200, -1)), 0);

    flexGridSizer374->Add(m_buttonScope, 1, wxRIGHT | wxEXPAND, WXC_FROM_DIP(5));

    m_buttonFilePath =
        new clThemedButton(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(200, -1)), 0);

    flexGridSizer374->Add(m_buttonFilePath, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_buttonBookmarks =
        new clThemedButton(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(200, -1)), 0);

    flexGridSizer374->Add(m_buttonBookmarks, 0, wxLEFT, WXC_FROM_DIP(5));

    SetName(wxT("clEditorBarBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_buttonScope->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(clEditorBarBase::OnButtonScope), NULL,
                           this);
    m_buttonFilePath->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(clEditorBarBase::OnButtonActions),
                              NULL, this);
    m_buttonBookmarks->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(clEditorBarBase::OnButtonBookmarks),
                               NULL, this);
}

clEditorBarBase::~clEditorBarBase()
{
    m_buttonScope->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(clEditorBarBase::OnButtonScope), NULL,
                              this);
    m_buttonFilePath->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(clEditorBarBase::OnButtonActions),
                                 NULL, this);
    m_buttonBookmarks->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                  wxCommandEventHandler(clEditorBarBase::OnButtonBookmarks), NULL, this);
}

clTableLineEditorBaseDlg::clTableLineEditorBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title,
                                                   const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer336 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer336);

    m_panel344 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    boxSizer336->Add(m_panel344, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer342 = new wxBoxSizer(wxHORIZONTAL);
    m_panel344->SetSizer(boxSizer342);

    wxArrayString m_listBoxColumnsArr;
    m_listBoxColumns = new wxListBox(m_panel344, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel344, wxSize(150, -1)),
                                     m_listBoxColumnsArr, wxLB_SINGLE);

    boxSizer342->Add(m_listBoxColumns, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_stc = new wxStyledTextCtrl(m_panel344, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel344, wxSize(-1, -1)), 0);
    // Configure the fold margin
    m_stc->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stc->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stc->SetMarginSensitive(4, true);
    m_stc->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stc->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stc->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stc->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stc->SetMarginWidth(2, 0);
    m_stc->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    m_stc->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc->SetMarginWidth(0, 0);

    // Configure the line symbol margin
    m_stc->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc->SetMarginMask(3, 0);
    m_stc->SetMarginWidth(3, 0);
    // Select the lexer
    m_stc->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stc->StyleClearAll();
    m_stc->SetWrapMode(1);
    m_stc->SetIndentationGuides(0);
    m_stc->SetKeyWords(0, wxT(""));
    m_stc->SetKeyWords(1, wxT(""));
    m_stc->SetKeyWords(2, wxT(""));
    m_stc->SetKeyWords(3, wxT(""));
    m_stc->SetKeyWords(4, wxT(""));

    boxSizer342->Add(m_stc, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    SetName(wxT("clTableLineEditorBaseDlg"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_listBoxColumns->Connect(wxEVT_COMMAND_LISTBOX_SELECTED,
                              wxCommandEventHandler(clTableLineEditorBaseDlg::OnColumnSelected), NULL, this);
}

clTableLineEditorBaseDlg::~clTableLineEditorBaseDlg()
{
    m_listBoxColumns->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED,
                                 wxCommandEventHandler(clTableLineEditorBaseDlg::OnColumnSelected), NULL, this);
}

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-8d58685)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "PNavtexPlugin.h"

///////////////////////////////////////////////////////////////////////////

NavtexPMainFrame::NavtexPMainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	#if wxCHECK_VERSION(3, 1, 3)
	[[maybe_unused]] auto pick_resname = [dark = wxSystemSettings::GetAppearance().IsDark()] (const auto& name, const auto& name_dark) noexcept -> decltype(auto)
	{
		return dark ? name_dark : name;
	};
	#else
	[[maybe_unused]] auto pick_resname = [] (const auto& name, const auto&) noexcept -> decltype(auto) { return name; };
	#endif

	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerPmain;
	bSizerPmain = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerMainFrame;
	bSizerMainFrame = new wxBoxSizer( wxVERTICAL );

	panelMain = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerMainFrame->Add( panelMain, 1, wxEXPAND | wxALL, 7 );


	bSizerPmain->Add( bSizerMainFrame, 1, wxALL|wxEXPAND, 0 );


	this->SetSizer( bSizerPmain );
	this->Layout();
	mainMenu = new wxMenuBar( 0 );
	menuSettings = new wxMenu();
	wxMenuItem* item_Settings;
	item_Settings = new wxMenuItem( menuSettings, wxID_ANY, wxString( _("Settings") ) , wxEmptyString, wxITEM_NORMAL );
	menuSettings->Append( item_Settings );

	wxMenuItem* item_SaveSettings;
	item_SaveSettings = new wxMenuItem( menuSettings, wxID_ANY, wxString( _("Save") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	menuSettings->Append( item_SaveSettings );

	menuSettings->AppendSeparator();

	wxMenuItem* item_SettingsExit;
	item_SettingsExit = new wxMenuItem( menuSettings, wxID_ANY, wxString( _("SettingsExit") ) + wxT('\t') + wxT("Alt+F4"), wxEmptyString, wxITEM_NORMAL );
	menuSettings->Append( item_SettingsExit );

	mainMenu->Append( menuSettings, _("Settings") );

	menuHelp = new wxMenu();
	wxMenuItem* itemHelp;
	itemHelp = new wxMenuItem( menuHelp, wxID_ANY, wxString( _("Help") ) + wxT('\t') + wxT("Ctrl+H"), wxEmptyString, wxITEM_NORMAL );
	menuHelp->Append( itemHelp );

	mainMenu->Append( menuHelp, _("Help") );

	menuExit = new wxMenu();
	wxMenuItem* item_Exit;
	item_Exit = new wxMenuItem( menuExit, wxID_ANY, wxString( _("Exit") ) + wxT('\t') + wxT("Ctrl+X"), wxEmptyString, wxITEM_NORMAL );
	menuExit->Append( item_Exit );

	mainMenu->Append( menuExit, _("Exit") );

	this->SetMenuBar( mainMenu );


	this->Centre( wxBOTH );

	// Connect Events
	menuSettings->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( NavtexPMainFrame::menuItemSettingsOnMenuSelection ), this, item_Settings->GetId());
	menuHelp->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( NavtexPMainFrame::menuItemHelpOnMenuSelection ), this, itemHelp->GetId());
	menuExit->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( NavtexPMainFrame::menuItemExitOnMenuSelection ), this, item_Exit->GetId());
}

NavtexPMainFrame::~NavtexPMainFrame()
{
}

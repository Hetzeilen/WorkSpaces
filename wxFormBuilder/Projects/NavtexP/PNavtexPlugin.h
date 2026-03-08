///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-8d58685)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class NavtexPMainFrame
///////////////////////////////////////////////////////////////////////////////
class NavtexPMainFrame : public wxFrame
{
	private:

	protected:
		wxPanel* panelMain;
		wxMenuBar* mainMenu;
		wxMenu* menuSettings;
		wxMenu* menuHelp;
		wxMenu* menuExit;

		// Virtual event handlers, override them in your derived class
		virtual void menuItemSettingsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void menuItemHelpOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void menuItemExitOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }


	public:

		NavtexPMainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Navtex Plugin"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~NavtexPMainFrame();

};


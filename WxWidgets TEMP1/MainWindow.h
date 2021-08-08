#pragma once

#include<wx/wxprec.h>
#include"datetime.h"

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MainWindow : public wxFrame
{
public:
    MainWindow(wxWindow* parent,
        wxWindowID id,
        const wxString& title,
        const wxPoint& pos = wxDefaultPosition,
        const wxSize& size = wxDefaultSize,
        long style = wxDEFAULT_FRAME_STYLE,
        const wxString& name = wxASCII_STR(wxFrameNameStr));

        ~MainWindow();

        void onGeorgian(wxCommandEvent& event);
        void onDarian(wxCommandEvent& event);
        void onQuit(wxCommandEvent& event);
        void onHelp(wxCommandEvent& event);
        
        void onClose(wxCloseEvent& event);

        DECLARE_EVENT_TABLE()

};


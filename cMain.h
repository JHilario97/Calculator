#pragma once
#include "wx\wx.h"


class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

	void OnButtonClicked(wxCommandEvent& evt);

	

public:
	

	wxDECLARE_EVENT_TABLE();

	wxTextCtrl* m_txt1 = nullptr;
	wxButton* minusButton = nullptr;
	wxButton* One = nullptr;
	wxButton* Two = nullptr;
	wxButton* Three = nullptr;
	wxButton* Four = nullptr;
	wxButton* Five = nullptr;
	wxButton* Six = nullptr;
	wxButton* Seven = nullptr;
	wxButton* Eight = nullptr;
	wxButton* Nine = nullptr;
	wxButton* Zero = nullptr;
	wxButton* plusButton = nullptr;
	wxButton* divideButton = nullptr;
	wxButton* multiplyButton = nullptr;
	wxButton* clearButton = nullptr;

	wxButton** buttins;
	



	
};

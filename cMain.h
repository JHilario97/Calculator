#pragma once
#include "wx\wx.h"


class cMain : public wxFrame
{

private:



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
	wxButton* hexButton = nullptr;
	wxButton* binButton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* decButton = nullptr;
	wxButton* equalsButton = nullptr;

	wxButton** buttins;
	
	void IsSolved();


	
};

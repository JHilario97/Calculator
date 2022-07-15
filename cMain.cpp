#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	
	EVT_BUTTON(1, OnButtonClicked)
	EVT_BUTTON(2, OnButtonClicked)
	EVT_BUTTON(3, OnButtonClicked)
	EVT_BUTTON(4, OnButtonClicked)
	EVT_BUTTON(5, OnButtonClicked)
	EVT_BUTTON(6, OnButtonClicked)
	EVT_BUTTON(7, OnButtonClicked)
	EVT_BUTTON(8, OnButtonClicked)
	EVT_BUTTON(9, OnButtonClicked)
	EVT_BUTTON(10, OnButtonClicked)
	EVT_BUTTON(100, OnButtonClicked)
	EVT_BUTTON(101, OnButtonClicked)
	EVT_BUTTON(102, OnButtonClicked)
	EVT_BUTTON(103, OnButtonClicked)
	EVT_BUTTON(104, OnButtonClicked)


wxEND_EVENT_TABLE()



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calcoolator B)", wxPoint(30,30), wxSize(500,460))
{

	


	m_btn1 = new wxButton(this, 1, "1", wxPoint(0, 50), wxSize(91, 75));
	m_btn1 = new wxButton(this, 2, "2", wxPoint(91, 50), wxSize(91, 75));
	m_btn1 = new wxButton(this, 3, "3", wxPoint(182, 50), wxSize(91, 75));
	m_btn1 = new wxButton(this, 4, "4", wxPoint(0, 125), wxSize(91, 75));
	m_btn1 = new wxButton(this, 5, "5", wxPoint(91, 125), wxSize(91, 75));
	m_btn1 = new wxButton(this, 6, "6", wxPoint(182, 125), wxSize(91, 75));
	m_btn1 = new wxButton(this, 7, "7", wxPoint(0, 200), wxSize(91, 75));
	m_btn1 = new wxButton(this, 8, "8", wxPoint(91, 200), wxSize(91, 75));
	m_btn1 = new wxButton(this, 9, "9", wxPoint(182, 200), wxSize(91, 75));
	m_btn1 = new wxButton(this, 10, "0", wxPoint(91, 275), wxSize(91, 75));

	m_btn1 = new wxButton(this, 100, "+", wxPoint(182, 275), wxSize(91, 75));
	m_btn1 = new wxButton(this, 101, "-", wxPoint(91, 350), wxSize(91, 75));
	m_btn1 = new wxButton(this, 102, "x", wxPoint(182, 350), wxSize(91, 75));
	m_btn1 = new wxButton(this, 103, "/", wxPoint(0, 350), wxSize(91, 75));
	m_btn1 = new wxButton(this, 104, "C", wxPoint(0, 275), wxSize(91, 75));
	
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(275, 50));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(275, 0), wxSize(210, 425));
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	switch (evt.GetId())
	{
	case 1:
		m_txt1->AppendText("1");
		break;
	case 2:
		m_txt1->AppendText("2");
		break;
	case 3:
		m_txt1->AppendText("3");
		break;
	case 4:
		m_txt1->AppendText("4");
		break;
	case 5:
		m_txt1->AppendText("5");
		break;
	case 6:
		m_txt1->AppendText("6");
		break;
	case 7:
		m_txt1->AppendText("7");
		break;
	case 8:
		m_txt1->AppendText("8");
		break;
	case 9:
		m_txt1->AppendText("9");
		break;
	case 10:
		m_txt1->AppendText("0");
		break;
	case 100:
		m_txt1->AppendText("-");
		break;
	case 101:
		m_txt1->AppendText("+");
		break;
	case 102:
		m_txt1->AppendText("x");
		break;
	case 103:
		m_txt1->AppendText("/");
		break;
	case 104:
		m_txt1->Clear();
		break;
	}
	m_list1->AppendString(m_txt1->GetValue());
	evt.Skip();
}


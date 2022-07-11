#include "cMain.h"


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calcoolator B)", wxPoint(30,30), wxSize(500,460))
{
	m_btn1 = new wxButton(this, wxID_ANY, "1", wxPoint(0, 50), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "2", wxPoint(91, 50), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "3", wxPoint(182, 50), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "4", wxPoint(0, 125), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "5", wxPoint(91, 125), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "6", wxPoint(182, 125), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "7", wxPoint(0, 200), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "8", wxPoint(91, 200), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "9", wxPoint(182, 200), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "0", wxPoint(91, 275), wxSize(91, 75));

	m_btn1 = new wxButton(this, wxID_ANY, "+", wxPoint(182, 275), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "-", wxPoint(91, 350), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "x", wxPoint(182, 350), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "/", wxPoint(0, 350), wxSize(91, 75));

	m_btn1 = new wxButton(this, wxID_ANY, "C", wxPoint(0, 275), wxSize(91, 75));
	m_btn1 = new wxButton(this, wxID_ANY, "8", wxPoint(91, 200), wxSize(91, 75));
	

	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(275, 50));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(275, 0), wxSize(210, 425));
}

cMain::~cMain()
{

}
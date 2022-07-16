#include "cMain.h"
#include "buttonFactory.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
wxEND_EVENT_TABLE()



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calcoolator B)", wxPoint(30, 30), wxSize(500, 460))
{
	buttonFactory factory;
	buttins = new wxButton * [15];

	 m_txt1 = new wxTextCtrl(this, 1000, "", wxPoint(0, 0), wxSize(275, 50));

	One = factory.CreateButton(this, 1);
	buttins[0] = One;
	Two = factory.CreateButton(this, 2);
	buttins[1] = Two;
	Three = factory.CreateButton(this, 3);
	buttins[2] = Three;
	Four = factory.CreateButton(this, 4);
	buttins[3] = Four;
	Five = factory.CreateButton(this, 5);
	buttins[4] = Five;
	Six = factory.CreateButton(this, 6);
	buttins[5] = Six;
	Seven = factory.CreateButton(this, 7);
	buttins[6] = Seven;
	Eight = factory.CreateButton(this, 8);
	buttins[7] = Eight;
	Nine = factory.CreateButton(this, 9);
	buttins[8] = Nine;
	Zero = factory.CreateButton(this, 10);
	buttins[9] = Zero;
	minusButton = factory.CreateButton(this, 101); 
	buttins[10] = minusButton;
	plusButton = factory.CreateButton(this, 100);
	buttins[11] = plusButton;
	multiplyButton = factory.CreateButton(this, 102);
	buttins[12] = multiplyButton;
	divideButton = factory.CreateButton(this, 103);
	buttins[13] = divideButton;
	clearButton = factory.CreateButton(this, 104);
	buttins[14] = clearButton;

	for (int i = 0; i < 15; i++)
	{
		buttins[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);

	}
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	int action = evt.GetId();

	switch (action)
	{
	case 1:
	{
		*m_txt1 << "1";
		break;
	}
	case 2:
	{	*m_txt1 << "2";
	break; }
	case 3: {
		*m_txt1 << "3";
		break; }
	case 4: {
		*m_txt1 << "4";
		break; }
	case 5: {
		*m_txt1 << "5";
		break; }
	case 6: {
		*m_txt1 << "6";
		break; }
	case 7: {
		*m_txt1 << "7";
		break; }
	case 8: {
		*m_txt1 << "8";
		break; }
	case 9: {
		*m_txt1 << "9";
		break; }
	case 10: {
		*m_txt1 << "0";
		break; }
	case 100: {
		*m_txt1 << "+";
		break; }
	case 101: {
		*m_txt1 << "-";
		break; }
	case 102: {
		*m_txt1 << "x";
		break; }
	case 103: {
		*m_txt1 << "/";
		break; }
	case 104: {
		*m_txt1 << "c";
		break; }
	}
}


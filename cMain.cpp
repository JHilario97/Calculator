#include "cMain.h"
#include "buttonFactory.h"
#include "string"
#include "CalculatorProcessor.h"


wxBEGIN_EVENT_TABLE(cMain, wxFrame)
wxEND_EVENT_TABLE()


std::string history = "";

int factor1 = 0;
int factor2 = 0;
int result = 0;
char operand;
bool isOn = true;
bool Cont = false;
bool toBin, toHex = false;
CalculatorProcessor* Proc = CalculatorProcessor::GetInstance();

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calcoolator B)", wxPoint(30, 30), wxSize(500, 615))
{
	buttonFactory factory;
	buttins = new wxButton * [20];

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
	hexButton = factory.CreateButton(this, 105);
	buttins[15] = hexButton;
	binButton = factory.CreateButton(this, 106);
	buttins[16] = binButton;
	modButton = factory.CreateButton(this, 107);
	buttins[17] = modButton;
	decButton = factory.CreateButton(this, 108);
	buttins[18] = decButton;
	equalsButton = factory.CreateButton(this, 109);
	buttins[19] = equalsButton;

	

	for (int i = 0; i < 20; i++)
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
	case 1:{
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "1";
		history += "1";
		break;}
	case 2:{
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "2";
		history += "2";
		break; }
	case 3: {
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}

		*m_txt1 << "3";
		history += "3";
		break; }
	case 4: {
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "4";
		history += "4";
		break; }
	case 5: {
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "5";
		history += "5";
		break; }
	case 6:{
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "6";
		history += "6";
		break; }
	case 7: {
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "7";
		history += "7";
		break; }
	case 8: {
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "8";
		history += "8";
		break; }
	case 9: {
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "9";
		history += "9";
		break; }
	case 10: {
		if (Cont == true)
		{
			m_txt1->Clear();
			Cont = false;
			history = "";
		}
		*m_txt1 << "0";
		history += "0";
		break; }
	case 100: {
		if (isOn == true && history.length() != 0)
		{
			factor1 = stoi(history);
			operand = '+';
			m_txt1->Clear();
			history = "";
			*m_txt1 << factor1 << " + ";
			isOn = false;

		}
		break; }
	case 101: {
		if (isOn == true && history.length() != 0)
		{
			factor1 = stoi(history);
			operand = '-';
			m_txt1->Clear();
			history = "";
			*m_txt1 << factor1 << " - ";
			isOn = false;

		}
		break; }
	case 102: {
		if (isOn == true && history.length() != 0)
		{
			factor1 = stoi(history);
			operand = 'x';
			m_txt1->Clear();
			history = "";
			*m_txt1 << factor1 << " x ";
			isOn = false;

		}
		break; }
	case 103: {
		if (isOn == true && history.length() != 0)
		{
			factor1 = stoi(history);
			operand = '/';
			m_txt1->Clear();
			history = "";
			*m_txt1 << factor1 << " / ";
			isOn = false;

		}
		break; }
	case 104: {
		factor1 = 0;
		factor2 = 0;
		result = 0;
		operand = NULL;
		history = "";
		isOn = true;
		
		m_txt1->Clear();
		break; }
	case 105: {
		if (toHex == true)
		{
			m_txt1->Clear();
			toHex = false;
		}
		else
		{
			m_txt1->Clear();
			factor1 = stoi(history);
			std::string Hexadecimal = Proc->ToHexadecimalString(factor1);
			*m_txt1 << Hexadecimal;
			toHex = true;
		}
		break; }
	case 106: {
		if (toBin == true)
		{
			m_txt1->Clear();
			toBin = false;
		}
		else
		{
			m_txt1->Clear();
			factor1 = stoi(history);
			std::string Binary = Proc->ToBinaryString(factor1);
			*m_txt1 << Binary;
			toBin = true;
		}
		break; }
	case 107: {
		if (isOn == true && history.length() != 0)
		{
			factor1 = stoi(history);
			operand = '%';
			m_txt1->Clear();
			history = "";
			*m_txt1 << factor1 << " % ";
			isOn = false;

		}
		break; }
	case 108: {
		if (toBin == true || toHex == true)
		{
			m_txt1->Clear();
			*m_txt1 << history;
			toBin = false;
			toHex = false;
		}
		else
		{
			m_txt1->Clear();
			*m_txt1 << "Number was already decimal, clear right now";
		}
		break; }
	case 109:{
		if (isOn != true && history.length() != 0)
		{
			m_txt1->Clear();
			factor2 = stoi(history);
			result = Proc->Result(factor1, factor2, operand);
			*m_txt1 << factor1 <<" " << operand <<" " << factor2 << " = " << result;
			isOn = true;
			Cont = true;

		}
		break;}

		
	}
	
}


#include "buttonFactory.h"


wxButton* buttonFactory::CreateButton(wxWindow* frame, wxWindowID ID)
{
	
	switch (ID)
	{
	case 1:
		return new wxButton(frame, ID, "1", wxPoint(0, 50), wxSize(91, 75));
		break;
	case 2:
		return new wxButton(frame, ID, "2", wxPoint(91, 50), wxSize(91, 75));
		break;
	case 3:
		return new wxButton(frame, ID, "3", wxPoint(182, 50), wxSize(91, 75));
		break;
	case 4:
		return new wxButton(frame, ID, "4", wxPoint(0, 125), wxSize(91, 75));
		break;
	case 5:
		return new wxButton(frame, ID, "5", wxPoint(91, 125), wxSize(91, 75));
		break;
	case 6:
		return new wxButton(frame, ID, "6", wxPoint(182, 125), wxSize(91, 75));
		break;
	case 7:
		return new wxButton(frame, ID, "7", wxPoint(0, 200), wxSize(91, 75));
		break;
	case 8:
		return new wxButton(frame, ID, "8", wxPoint(91, 200), wxSize(91, 75));
		break;
	case 9:
		return new wxButton(frame, ID, "9", wxPoint(182, 200), wxSize(91, 75));
		break;
	case 10:
		return new wxButton(frame, ID, "0", wxPoint(91, 275), wxSize(91, 75));
		break;
	case 100:
		return new wxButton(frame, ID, "+", wxPoint(182, 275), wxSize(91, 75));
		break;
	case 101:
		return new wxButton(frame, ID, "-", wxPoint(91, 350), wxSize(91, 75));
		break;
	case 102:
		return new wxButton(frame, ID, "x", wxPoint(182, 350), wxSize(91, 75));
		break;
	case 103:
		return new wxButton(frame, ID, "/", wxPoint(0, 350), wxSize(91, 75));
		break;
	case 104:
		return new wxButton(frame, ID, "C", wxPoint(0, 275), wxSize(91, 75));
		break;
	case 105:
		return new wxButton(frame, ID, "HEX", wxPoint(0,425), wxSize(91,75));
		break;
	case 106:
		return new wxButton(frame, ID, "BIN", wxPoint(91, 425), wxSize(91, 75));
		break;
	case 107:
		return new wxButton(frame, ID, "MOD", wxPoint(182, 425), wxSize(91, 75));
		break;
	case 108:
		return new wxButton(frame, ID, "DEC", wxPoint(182, 500), wxSize(91, 75));
		break;
	case 109:
		return new wxButton(frame, ID, "=", wxPoint(0, 500), wxSize(182, 75));
		break;
	}
	
}

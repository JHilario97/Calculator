#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;


int CalculatorProcessor::Result(int num1, int num2, char calculate)
{
	int result = 0;
	switch (calculate)
	{
		case'+':
		{
			result = num1 + num2;
			break;
		}
		case'-': {
			result = num1 - num2;
			break;
		}
		case'/': {
			result = num1 / num2;
			break;
		}
		case 'x': {
			result = num1 * num2;
			break;
		}
		case '%': {
			result = num1 % num2;
			break;
		}
		
	}
	return result;
	
}

std::string CalculatorProcessor::ToBinaryString(int number)
{
	std::string results = "";

	for (int i = 0; i < 16; i++)
	{
		if (number % 2 == 0)
		{
			results = "0" + results;
		}
		else
		{
			results = "1" + results;
		}
		number = number / 2;
	}

	return results;
}

std::string CalculatorProcessor::ToHexadecimalString(int number)
{
	std::string results = "";
	while (number > 0)
	{
		int remainder = number % 16;
		if (remainder < 10) 
		{
			results = std::to_string(remainder) + results;
		}
		else if (remainder == 10) 
		{
			results = "A" + results;
		}
		else if (remainder == 11)
		{
			results = "B" + results;
		}
		else if (remainder == 12)
		{
			results = "C" + results;
		}
		else if (remainder == 13)
		{
			results = "D" + results;
		}
		else if (remainder == 14)
		{
			results = "E" + results;
		}
		else if (remainder == 15)
		{
			results = "F" + results;
		}
		number = number / 16;
	}
	return results;
}
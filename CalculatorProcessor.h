#pragma once
#include <string>

class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	void Processor(){}

public:
	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor;
		}
		return _processor;
	}
	void Processor(CalculatorProcessor& other) = delete;
	void operator = (CalculatorProcessor & other) = delete;

	int Result(int num1, int num2, char calculate);
	std::string ToBinaryString(int number);
	std::string ToHexadecimalString(int number);
};


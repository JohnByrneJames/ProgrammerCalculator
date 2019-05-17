#pragma once
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;


class Calculations {

private:

	int m_number1;
	int m_number2;

	int convertBinaryToDecimal(int) const;

public:

	double equations(char, double, double) const;
	int binaryEquations(String^, String^, char) const;
	int binaryNotOp(String^, char) const;
};

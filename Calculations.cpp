#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <msclr\marshal_cppstd.h>

#include "Calculations.h"

double Calculations::equations(char op, double n1, double n2) const
{
	double returnValue;

	// ** Use Operator to Determine Operation **
	switch (op)
	{
	case '+':
		returnValue = n1 + n2;
		break;
	case '/':
		returnValue = n1 / n2;
		break;
	case '-':
		returnValue = n1 - n2;
		break;
	case '×':
		returnValue = n1 * n2;
		break;
	case '%':
		returnValue = fmod(n1, n2);
	}
	// ** Returns Result **

	return returnValue;
}

int Calculations::binaryEquations(String^ bin1, String^ bin2, char op) const
{
	int returnValue;
	// ** Conversion from STRING^ to CHAR [ Convert String to native C++]
	IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(bin1); // StringToHGlobalAnsi is useful when mixing managed and unmanged code
	char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());
	int number1 = atoi(nativeString);

	// ** Conversion from STRING^ to CHAR [ Convert String to native C++]
	ptrToNativeString = Marshal::StringToHGlobalAnsi(bin2); // StringToHGlobalAnsi is useful when mixing managed and unmanged code
	char* nativeString2 = static_cast<char*>(ptrToNativeString.ToPointer());
	int number2 = atoi(nativeString2);

	unsigned char Nbin1 = convertBinaryToDecimal(number1); //Converting the integer binary number in decimal
	unsigned char Nbin2 = convertBinaryToDecimal(number2);

	switch (op)
	{
	case 'n':
		returnValue = ~Nbin1;
		break;
	case 'o':
		returnValue = Nbin1 | Nbin2;
		break;
	case 'x':
		returnValue = Nbin1 ^ Nbin2;
		break;
	case 'a':
		returnValue = Nbin1 & Nbin2;
		break;
	}

	return returnValue;
	
}

int Calculations::binaryNotOp(String^ bin, char op) const
{
	int total;
	string constructor;

	string binary = msclr::interop::marshal_as<std::string>(bin);
	for (int i = 0; i < binary.length(); i++)
	{
		if (binary[i] == '0')
		{
			constructor = constructor + "1";
		}
		else
		{
			constructor = constructor + "0";
		}
	}

	total = stoi(constructor);
	return total;
}

int Calculations::convertBinaryToDecimal(int n) const
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}



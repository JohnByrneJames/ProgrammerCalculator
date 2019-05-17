#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <algorithm> // ** Retrieve Reverse ** 
#include <msclr\marshal_cppstd.h>

#include "Conversions.h"

string Conversions::decToBinary(int value)
{
	int total = 0;

	string constructor;

	while (value > 0)
	{
		total = value % 2; // Divide by 2 Retrieve remainder [0 or 1]
		if (total == 1)
		{
			constructor = constructor + "1";
		}
		else if (total == 0)
		{
			constructor = constructor + "0";
		}
		value /= 2; // Divide Value by 2 retrieve value 
	}
	
	reverse(constructor.begin(), constructor.end()); // ** Reverses String
	return constructor;
}

string Conversions::decToHexadecimal(int value)
{
	string result;
	char buffer[33];

	return result = itoa(value, buffer, 16);
}

string Conversions::decToOct(int value)
{
	int total = 0;

	string constructor;

	while (value > 0)
	{
		total = value % 8;
		constructor = constructor + to_string(total);
		value /= 8;
	}

	reverse(constructor.begin(), constructor.end());
	return constructor;		// ** Reverses String
}

string Conversions::binaryToDecimal(int value)
{
	int total = 0, i = 0, remainder;
	
	while (value != 0)
	{
		remainder = value % 10;
		value /= 10;
		total += remainder * pow(2, i);
		++i;
	}

	string returnValue = std::to_string(total);
	return returnValue;

}

string Conversions::hexadecimalToDecimal(string hex)
{
	unsigned int y = std::stoul(hex, nullptr, 16);
	string returnValue = std::to_string(y);
	return returnValue;
}

string Conversions::octToDecimal(int value)
{
	int total, i = 0, rem;
	while (value != 0)
	{
		rem = value % 10;
		value /= 10;
		total += rem * pow(8, i);
		++i;
	}

	string returnValue = std::to_string(total);
	return returnValue;
}
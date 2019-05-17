#pragma once
#include <iostream>
#include <string>

using namespace std;

class Conversions {
	
private:
	

public:
	string decToBinary(int); // ** Decimal -> Binary **
	string decToHexadecimal(int); // ** Decimal -> Hexadecimal **
	string decToOct(int); // ** Decimal -> Oct **

	string binaryToDecimal(int); // ** Binary -> Decimal **
	string hexadecimalToDecimal(string); // ** Binary -> Decimal **
	string octToDecimal(int); // ** Octa -> Decimal **
};
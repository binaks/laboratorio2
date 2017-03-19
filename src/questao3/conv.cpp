#include <iostream>
#include <string>
#include "../include/questao3/conv.h"

using std::string;

string convDec2Bin (int n) {
	string bin;

	if (n%2 == 0) {
		bin += '0';
	} else {
		bin += '1';
	}

	if (n/2 > 0) {
		return convDec2Bin(n/2) + bin;
	} else {
		return bin;
	}
}
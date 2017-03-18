#include <iostream>
#include "../include/questao3/conv.h"

int convDec2Bin (int n) {
	int bin = n%2;

	if (n/2 > 0) {
		convDec2Bin(n/2);
	}

	return (bin);
}
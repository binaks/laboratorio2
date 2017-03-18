#include <iostream>
#include <cmath>
#include "../include/questao2/calcmdc.h"

int euclides (int n, int m) {
	int resto;

	resto = remainder(n, m);

	if (resto == 0) {
		return n;
	} else {
		return euclides (resto, n);
	}
}
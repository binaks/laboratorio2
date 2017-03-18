#include <iostream>
#include "../include/questao2/calcmdc.h"

int euclides (int n, int m) {
	if (m%n == 0) {
		return n;
	} else {
		return euclides (m%n, n);
	}
}
#include <iostream>
#include "../include/questao5/qiterativo.h"

using std::cout;

int qiterativo (int n) {
	int resultado = 0;

	while (n > 1) {
		n = (2 * n) - 1;
		if (n%2 != 0) {
			cout << n << " + ";
			resultado += n;
			n = n/2;
		} else {
			n = n - 1;
		}
	}
	n = 1;
	resultado += n;
	cout << "1 = ";
	return resultado;
}
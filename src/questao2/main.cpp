#include <iostream>
#include "../include/questao2/calcmdc.h"

using std::cout;
using std::cin;
using std::endl;

int main () {
	int n;
	int m;

	cout << "Digite dois números naturais positivos: " << endl;

	cin >> n;
	cin >> m;

	if (n <= 0 || m <= 0) {
		cout << "Valores inválidos." << endl;
		return 0;
	}

	if (n <= m) {
		cout << "MDC(" << m << "," << n << ") = " << euclides (m, n) << endl;
	} else if (n > m) {
		cout << "MDC(" << n << "," << m << ") = " << euclides (n, m) << endl;
	}

	return 0;
}
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
		euclides (n, m);
	} else if (n > m) {
		euclides (m, n);
	}

	return 0;
}
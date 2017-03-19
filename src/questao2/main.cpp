/**
 * @file main.cpp
 * @brief Programa que calcula o mdc de dois números através do algoritmo de Euclides
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include "../include/questao2/calcmdc.h"

using std::cout;
using std::cin;
using std::endl;

int main () {
	int n;
	int m;

	cout << "Digite dois números naturais positivos: ";

	cin >> n;
	cin >> m;

	if (n <= 0 || m <= 0) { /**< Precisam ser naturais positivos */
		cout << "Valores inválidos." << endl;
		return 0;
	}

	if (n <= m) { /**< Para que o maior sempre venha primeiro na fórmula */
		cout << "MDC(" << m << "," << n << ") = " << euclides (m, n) << endl;
	} else if (n > m) {
		cout << "MDC(" << n << "," << m << ") = " << euclides (n, m) << endl;
	}

	return 0;
}
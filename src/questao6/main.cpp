/**
 * @file main.cpp
 * @brief Programa que realiza uma busca ternária
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include "../include/questao6/bternaria.h"

using std::cout;
using std::endl;

int main (int argc, char* argv[]) {
	argc = 2;

	int x = atoi(argv[1]);
	int v[] = {2, 5, 9, 11, 13, 17, 22, 24, 33, 38, 39, 40, 45, 56, 71, 99, 110, 113, 132, 155, 166, 203, 211, 212, 230, 233};
	int ini = 0;
	int fim = 25;

	if (busca_ternaria (v, ini, fim, x)) {
		cout << "O elemento " << x << " faz parte do vetor." << endl;
	}else {
		cout << "O elemento " << x << " não faz parte do vetor." << endl;
	}

	return 0;
}
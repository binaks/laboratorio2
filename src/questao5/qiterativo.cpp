/**
 * @file qiterativo.cpp
 * @brief Função que calcula o quadrado de um número usando iteratividade
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include "../include/questao5/qiterativo.h"

using std::cout;

/**
 * @brief Calcula o quadrado do número usando iteratividade
 * @param n O número cujo quadrado será calculado
 * @return n ao quadrado
 */
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
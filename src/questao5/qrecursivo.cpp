/**
 * @file qrecursivo.cpp
 * @brief Função que calcula o quadrado de um número usando recursividade
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include "../include/questao5/qrecursivo.h"

using std::cout;

/**
 * @brief Calcula o quadrado do número usando recursividade
 * @param n O número cujo quadrado será calculado
 * @return n ao quadrado
 */
int qrecursivo (int n) {
	n = (2 * n) - 1;
	if (n > 1) {
		if (n%2 != 0) {
			cout << n << " + ";
			return n + qrecursivo(n/2);
		} else {
			return qrecursivo(n-1);
		}
	} else {
		cout << "1 = ";
		return 1;
	}
}
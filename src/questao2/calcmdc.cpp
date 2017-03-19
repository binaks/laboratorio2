/**
 * @file calcmdc.cpp
 * @brief Função que calcula o mdc de dois números através do algoritmo de Euclides
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include "../include/questao2/calcmdc.h"

/**
 * @brief Calcula o mdc através do algoritmo de Euclides
 * @param n O menor número natural positivo
 * @param m O maior número natural positivo
 * @return mdc
 */
int euclides (int n, int m) {
	if (m%n == 0) {
		return n;
	} else {
		return euclides (m%n, n);
	}
}
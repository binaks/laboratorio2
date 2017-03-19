/**
 * @file rec.cpp
 * @brief Funções que calculam o valor de dois tipos de somatório usando recursão.
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include <cmath>
#include "../include/questao1/rec.h"

float a_rec (float n) { /**< Calcula a sequencia A */
	if (n > 0) {
		return 1/n + a_rec(n - 1);
	} else {
		return 0;
	}
}

float b_rec (float n) { /**< Calcula a sequencia B */
	if (n > 0) {
		return (pow(n,2) + 1)/(n + 3) + b_rec (n - 1);
	} else {
		return 0;
	}
}
/**
 * @file iterat.cpp
 * @brief Funções que calculam o valor de dois tipos de somatório usando funções iterativas.
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include <cmath>
#include "../include/questao1/iterat.h"

/**
 * @brief Calcula a sequência A
 * @param n O número para o qual a sequência será calculada
 * @return Resultado do somatório
 */
float a_iterat (float n) {
	float resultado = 0;

	while (n > 0) {
		resultado += 1/n;
		n--;
	}

	return resultado;
}

/**
 * @brief Calcula a sequência B
 * @param n O número para o qual a sequência será calculada
 * @return Resultado do somatório
 */
float b_iterat (float n) {
	float resultado = 0;

	while (n > 0) {
		resultado += (pow(n,2) + 1)/(n + 3);
		n--;
	}

	return resultado;
}
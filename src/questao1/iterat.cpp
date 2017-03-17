#include <iostream>
#include <cmath>
#include "../include/questao1/iterat.h"

float a_iterat (float n) {
	float resultado = 0;

	while (n > 0) {
		resultado += 1/n;
		n--;
	}

	return resultado;
}

float b_iterat (float n) {
	float resultado = 0;

	while (n > 0) {
		resultado += (pow(n,2) + 1)/(n + 3);
		n--;
	}

	return resultado;
}
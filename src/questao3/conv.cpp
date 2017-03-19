/**
 * @file conv.cpp
 * @brief Função que converte o número decimal para binário
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include <string>
#include "../include/questao3/conv.h"

using std::string;

/**
 * @brief Converte decimal para binário
 * @param n Um número decimal
 * @return Seu correspondente em binário
 */
string convDec2Bin (int n) {
	string bin;

	if (n%2 == 0) {
		bin += '0';
	} else {
		bin += '1';
	}

	if (n/2 > 0) {
		return convDec2Bin(n/2) + bin;
	} else {
		return bin;
	}
}
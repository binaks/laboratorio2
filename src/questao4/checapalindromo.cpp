/**
 * @file checapalindromo.cpp
 * @brief Funções que decidem se uma palavra é ou não um palíndromo
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <algorithm>
#include <iostream>
#include <string>
#include "../include/questao4/checapalindromo.h"

using std::string;
using std::cout;
using std::endl;
using std::transform;

/**
 * @brief Converte uma palavra para o seu equivalente em lowercase
 * @param palavra A palavra a ser convertida
 * @return A palavra equivalente em lowercase
 */
string converte (string palavra) {
	transform (palavra.begin(), palavra.end(), palavra.begin(), ::tolower);
	return palavra;
}

/**
 * @brief Inverte a ordem dos caracteres de uma palavra
 * @param palavra A palavra a ser invertida
 * @return A palavra ao contrário
 */
string reverte (string palavra) {
	string novaPalavra;
	if (palavra.length() > 0) {
		novaPalavra += palavra.at(0);
		palavra.erase(0,1);
		return reverte (palavra) + novaPalavra;
	} else {
		return novaPalavra;
	}
}

/**
 * @brief Compara a palavra invertida à palavra original
 * @param palavra A palavra original
 * @param novaPalavra A palavra invertida
 * @return Se forem iguais, a palavra é um palíndromo. Caso contrário, não.
 */
void compara (string palavra, string novaPalavra) {
	if (palavra == novaPalavra) {
		cout << "\"" << palavra << "\" é um palíndromo" << endl;
	} else {
		cout << "\"" << palavra << "\" não é um palíndromo" << endl;
	}
}
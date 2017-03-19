/**
 * @file checapalindromo.h
 * @brief Funções que decidem se uma palavra é ou não um palíndromo
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#ifndef CHECAPALINDROMO_H
#define CHECAPALINDROMO_H

#include <algorithm>
#include <iostream>
#include <string>

using std::string;

/**
 * @brief Converte uma palavra para o seu equivalente em lowercase
 * @param palavra A palavra a ser convertida
 * @return A palavra equivalente em lowercase
 */
string converte (string palavra);

/**
 * @brief Inverte a ordem dos caracteres de uma palavra
 * @param palavra A palavra a ser invertida
 * @return A palavra ao contrário
 */
string reverte (string palavra);

/**
 * @brief Compara a palavra invertida à palavra original
 * @param palavra A palavra original
 * @param novaPalavra A palavra invertida
 * @return Se forem iguais, a palavra é um palíndromo. Caso contrário, não.
 */
void compara (string palavra, string novaPalavra);

#endif
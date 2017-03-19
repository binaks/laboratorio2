/**
 * @file main.cpp
 * @brief Programa que decide se uma palavra é ou não um palíndromo
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include <string>
#include "../include/questao4/checapalindromo.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main () {
	string palavra;

	cout << "Digite uma palavra: ";
	cin >> palavra;

	palavra = converte (palavra);

	compara (palavra, reverte(palavra));

	return 0;
}
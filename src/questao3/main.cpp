/**
 * @file main.cpp
 * @brief Programa que mostra a representação de um número decimal em binário
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include <string>
#include "../include/questao3/conv.h"

using std::cin;
using std::cout;
using std::endl;

int main () {
	int n;

	cout << "Digite um número: ";
	cin >> n;
	cout << "Representação de " << n << " na forma binária: ";
	cout << convDec2Bin(n) << endl;

	return 0;
}
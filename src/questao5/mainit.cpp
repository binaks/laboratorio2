/**
 * @file mainit.cpp
 * @brief Programa que calcula o quadrado de um número usando funções iterativas
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include "../include/questao5/qiterativo.h"

using std::cout;
using std::endl;

int main (int argc, char* argv[]) {
	argc = 2;

	int n = atoi(argv[1]);

	cout << "quadrado (" << n << ") => ";

	cout << qiterativo(n) << endl;

	return 0;
}
/**
 * @file msg.cpp
 * @brief Funções que imprimem mensagens para o usuário
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include "../include/questao1/msg.h"

using std::cout;
using std::endl;

/**
 * @brief Imprime o resultado da sequência A ou B
 * @param ab Identifica o tipo de sequência que foi usado
 * @param n O valor para o qual a sequência foi calculada
 */
void msgAB (char ab, int n) {
	cout << "O valor da sequencia " << ab << " para N = " << n << " e ";
}

/**
 * @brief Imprime qual versão (iterativa ou recursiva) foi usada
 * @param ri Identifica o tipo de função que foi usado
 */
void msgRI (char ri) {
	if (ri == 'R') {
		cout << " (a versão recursiva foi usada)" << endl;
	} else {
		cout << " (a versão iterativa foi usada)" << endl;
	}
}
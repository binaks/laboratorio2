/**
 * @file bternaria.cpp
 * @brief Função que realiza uma busca ternária
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include "../include/questao6/bternaria.h"

/**
 * @brief Decide se um número se encontra ou não no vetor dado
 * @param *v Ponteiro para o primeiro elemento do vetor onde a busca será realizada
 * @param ini Início do vetor
 * @param fim Fim do vetor
 * @param x Chave de busca
 * @return Bool se a chave de busca se encontra ou não no vetor
 */
bool busca_ternaria (int *v, int ini, int fim, int x) {
	if (ini > fim) return false;
	int k = (ini + fim)/2;
	int mid1 = (k + ini)/2;
	int mid2 = (k + fim)/2;

	if (v[mid1] == x) return true;
	if (v[mid2] == x) return true;
	if (v[mid1] > x) return busca_ternaria (v, ini, mid1 -1, x);
	if (v[mid2] < x) return busca_ternaria (v, mid2 + 1, fim, x);
	else return busca_ternaria (v, mid1 + 1, mid2 - 1, x);
}
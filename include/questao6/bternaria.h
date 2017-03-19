/**
 * @file bternaria.h
 * @brief Função que realiza uma busca ternária
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#ifndef BTERNARIA_H
#define BTERNARIA_H

#include <iostream>

/**
 * @brief Decide se um número se encontra ou não no vetor dado
 * @param *v Ponteiro para o primeiro elemento do vetor onde a busca será realizada
 * @param ini Início do vetor
 * @param fim Fim do vetor
 * @param x Chave de busca
 * @return Bool se a chave de busca se encontra ou não no vetor
 */
bool busca_ternaria (int *v, int ini, int fim, int x);

#endif
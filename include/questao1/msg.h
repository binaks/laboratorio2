/**
 * @file msg.cpp
 * @brief Funções que imprimem mensagens para o usuário
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#ifndef MSG_H
#define MSG_H

#include <iostream>

/**
 * @brief Imprime o resultado da sequência A ou B
 * @param ab Identifica o tipo de sequência que foi usado
 * @param n O valor para o qual a sequência foi calculada
 */
void msgAB (char ab, int n);

/**
 * @brief Imprime qual versão (iterativa ou recursiva) foi usada
 * @param ri Identifica o tipo de função que foi usado
 */
void msgRI (char ri);

#endif
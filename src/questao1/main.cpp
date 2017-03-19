/**
 * @file main.cpp
 * @brief Programa que calcula o valor de dois tipos de somatório usando funções recursivas ou iterativas.
 * @author Bianca Rodrigues Cesarino
 * @since 16/03/2017
 * @date 19/03/2017
 * @sa https://github.com/binaks/laboratorio2
 */

#include <iostream>
#include <iomanip>
#include "../include/questao1/rec.h"
#include "../include/questao1/iterat.h"
#include "../include/questao1/msg.h"

using std::cout;
using std::setprecision; /**< Para configurar o número de dígitos do float */

int main (int argc, char* argv[]) { /**< O programa recebe dados por linha de código */
	argc = 4; /**< Serão recebidos 4 argumentos (contando com o nome do programa) */

	char ab = *argv[1]; /**< O primeiro argumento deve ser 'A' ou 'B' */
	char ri = *argv[2]; /**< O segundo argumento deve ser 'R' ou 'I' */
	int n = atoi(argv[3]); /**< Converte o terceiro argumento para o tipo inteiro */

	if (ab == 'A') { /**< Para calcular o resultado do somatório A */
		if (ri == 'R') { /**< Usando recursão */
			msgAB(ab, n);
			cout << setprecision(3) << a_rec(n);
			msgRI(ri);
		}
		if (ri == 'I') { /**< Usando iteração */
			msgAB(ab, n);
			cout << setprecision(3) << a_iterat(n);
			msgRI(ri);
		}
	} else if (ab == 'B') { /**< Para calcular o resultado do somatório B */
		if (ri == 'R') { /**< Usando recursão */
			msgAB(ab, n);
			cout << setprecision(3) << b_rec(n);
			msgRI(ri);
		}
		if (ri == 'I') { /**< Usando iteração */
			msgAB(ab, n);
			cout << setprecision(3) << b_iterat(n);
			msgRI(ri);
		}
	}

	return 0;
}
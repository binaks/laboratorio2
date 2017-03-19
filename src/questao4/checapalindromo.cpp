#include <iostream>
#include <string>
#include "../include/questao4/checapalindromo.h"

using std::string;
using std::cout;
using std::endl;

string reverte (string palavra) {
	string novaPalavra;
	int tam = palavra.length();
	if (tam > 0) {
		novaPalavra += palavra.at(0);
		palavra.erase(0,1);
		return reverte (palavra) + novaPalavra;
	} else {
		return novaPalavra;
	}
}

void compara (string palavra, string novaPalavra) {
	if (palavra == novaPalavra) {
		cout << "\"" << palavra << "\" é um palíndromo" << endl;
	} else {
		cout << "\"" << palavra << "\" não é um palíndromo" << endl;
	}
}
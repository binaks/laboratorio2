#include <algorithm>
#include <iostream>
#include <string>
#include "../include/questao4/checapalindromo.h"

using std::string;
using std::cout;
using std::endl;
using std::transform;

string converte (string palavra) {
	transform (palavra.begin(), palavra.end(), palavra.begin(), ::tolower);
	return palavra;
}

string reverte (string palavra) {
	string novaPalavra;
	if (palavra.length() > 0) {
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
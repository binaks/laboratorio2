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

	compara (palavra, reverte(palavra));

	return 0;
}
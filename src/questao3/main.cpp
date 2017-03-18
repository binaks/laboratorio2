#include <iostream>
#include "../include/questao3/conv.h"

using std::cin;
using std::cout;
using std::endl;

int main () {
	int n;

	cout << "Digite um número: " << endl;
	cin >> n;
	cout << "Representação de " << n << " na forma binária: ";
	cout << convDec2Bin(n) << endl;

	return 0;
}
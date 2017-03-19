#include <iostream>
#include "../include/questao5/qrecursivo.h"

using std::cin;
using std::cout;
using std::endl;

int main () {
	int n;
	cin >> n;

	cout << "quadrado (" << n << ") => ";

	cout << qrecursivo(n) << endl;

	return 0;
}
#include <iostream>
#include "../include/questao5/qrecursivo.h"

using std::cout;
using std::endl;

int main (int argc, char* argv[]) {
	argc = 2;

	int n = atoi(argv[1]);

	cout << "quadrado (" << n << ") => ";

	cout << qrecursivo(n) << endl;

	return 0;
}
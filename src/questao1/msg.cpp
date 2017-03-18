#include <iostream>
#include "../include/questao1/msg.h"

using std::cout;
using std::endl;

void msgAB (char ab, int n) {
	cout << "O valor da sequencia " << ab << " para N = " << n << " e ";
}

void msgRI (char ri) {
	if (ri == 'R') {
		cout << " (a versão recursiva foi usada)" << endl;
	} else {
		cout << " (a versão iterativa foi usada)" << endl;
	}
}
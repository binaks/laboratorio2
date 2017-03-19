#include <iostream>
#include "../include/questao5/qrecursivo.h"

using std::cout;

int qrecursivo (int n) {
	n = (2 * n) - 1;
	if (n > 1) {
		if (n%2 != 0) {
			cout << n << " + ";
			return n + qrecursivo(n/2);
		} else {
			return qrecursivo(n-1);
		}
	} else {
		cout << "1 = ";
		return 1;
	}
}
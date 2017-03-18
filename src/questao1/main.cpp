#include <iostream>
#include <iomanip>
#include "../include/questao1/rec.h"
#include "../include/questao1/iterat.h"
#include "../include/questao1/msg.h"

using std::cout;
using std::setprecision;

int main (int argc, char* argv[]) {
	argc = 4;

	char ab = *argv[1];
	char ri = *argv[2];
	int n = atoi(argv[3]);

	if (ab == 'A') {
		if (ri == 'R') {
			msgAB(ab, n);
			cout << setprecision(3) << a_rec(n);
			msgRI(ri);
		}
		if (ri == 'I') {
			msgAB(ab, n);
			cout << setprecision(3) << a_iterat(n);
			msgRI(ri);
		}
	} else if (ab == 'B') {
		if (ri == 'R') {
			msgAB(ab, n);
			cout << setprecision(3) << b_rec(n);
			msgRI(ri);
		}
		if (ri == 'I') {
			msgAB(ab, n);
			cout << setprecision(3) << b_iterat(n);
			msgRI(ri);
		}
	}

	return 0;
}
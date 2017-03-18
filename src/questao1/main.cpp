#include <iostream>
#include "../include/questao1/rec.h"
#include "../include/questao1/iterat.h"
#include "../include/questao1/msg.h"

using std::cout;
using std::endl;

int main (int argc, char* argv[]) {
	argc = 4;

	char ab = *argv[1];
	char ri = *argv[2];
	int n = atoi(argv[3]);

	if (ab == 'A') {
		if (ri == 'R') {
			msgAB(ab, n);
			cout << a_rec(n);
			msgRI(ri);
		}
		if (ri == 'I') {
			msgAB(ab, n);
			cout << a_iterat(n);
			msgRI(ri);
		}
	} else if (ab == 'B') {
		if (ri == 'R') {
			msgAB(ab, n);
			cout << b_rec(n);
			msgRI(ri);
		}
		if (ri == 'I') {
			msgAB(ab, n);
			cout << b_iterat(n);
			msgRI(ri);
		}
	}

	return 0;
}
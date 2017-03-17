#include <iostream>
#include "../include/questao1/rec.h"
#include "../include/questao1/iterat.h"

using std::cin;
using std::cout;
using std::endl;

int main () {
	int n;

	cin >> n;
	cout << a_rec(n) << endl;
	cout << b_rec(n) << endl;
	cout << a_iterat(n) << endl;
	cout << b_iterat(n) << endl;

	return 0;
}
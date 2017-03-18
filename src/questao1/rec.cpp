#include <iostream>
#include <cmath>
#include "../include/questao1/rec.h"

float a_rec (float n) {
	if (n > 0) {
		return 1/n + a_rec(n - 1);
	} else {
		return 0;
	}
}

float b_rec (float n) {
	if (n > 0) {
		return (pow(n,2) + 1)/(n + 3) + b_rec (n - 1);
	} else {
		return 0;
	}
}
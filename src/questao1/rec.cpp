#include <iostream>
#include "../include/questao1/rec.h"

float a_rec (float n) {
	if (n > 1) {
		return 1/n + a_rec(n - 1);
	} else {
		return 1;
	}
}
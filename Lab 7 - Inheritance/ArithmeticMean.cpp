#include "ArithmeticMean.h"

void ArithmeticMean::reset() {
	tab.clear();
}

double ArithmeticMean::result() {

	double sum_x = 0.;

	for (size_t i = 0; i < tab.size(); i++) {
		sum_x += tab[i];
	}

	return sum_x / tab.size();
}


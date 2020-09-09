#include "Sin.h"

void Sin::set_parameter(double number) {
	_a = number;
}

double Sin::calc(double x) {
	return sin(_a*x);
}
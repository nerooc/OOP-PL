#include "Derivative.h"

void Derivative::set_dx(double dx) {
	_dx = dx;
}

double Derivative::calc(double x) {
	return (_func->calc(x + _dx) - _func->calc(x - _dx)) / (2*_dx);
}
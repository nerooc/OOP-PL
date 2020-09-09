#include "Number.h"

Number::Number(double num){ 
    if(num < x || num > y) throw std::out_of_range("Out of range during construction");
    else number = num;
}

Number::~Number(){}

double& Number::value(){ 
	return number;
}

const double& Number::value() const{ 
	return number;
}

void Number::print() const { 
	if(number < x || number > y) throw std::out_of_range("Out of range during assignment");
    else std::cout << "Number: " << number << " is in the range [" << x << ", " << y << "]" << std::endl;
}

void Number::setRange(int a, int b) { 
	x = a;
	y = b;
}

int Number::x; 
int Number::y; 
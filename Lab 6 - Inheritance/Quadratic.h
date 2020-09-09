#pragma once
#include "Function.h"
class Quadratic : public Function{ //pochodna klasa quadratic, dziedzicząca publicznie po klasie Function która pełni funkcje funkcji kwadratowej

public:
	Quadratic(double a, double b, double c) : _a(a), _b(b), _c(c){} //konstruktor klasy quadratic, otrzymuje wspolczynniki potrzebne do stworzenia funkcji kwadratowej (a, b, c)
	~Quadratic() {}; //destruktor klasy quadratic
	double calc(double x); //funkcja calc liczaca wartosc funkcji kwadratowej dla podanego x
	
	Quadratic* clone() const //funkcja tworząca kopię/klona obiektu klasy Quadratic
	{
		return new Quadratic(*this);
	}

private:
	double _a, _b, _c; //składniki _a, _b i _c to współczynniki funkcji kwadratowej
};


#pragma once
#include "Function.h"
class Sin : public Function
{
public:
	Sin(double number) : _a(number){} //pochodna klasa sin, dziedzicząca publicznie po klasie Function, pełniąca funkcję funkcji sinus
	~Sin() {}; //destruktor klasy sin
	void set_parameter(double number); //funkcja ustalająca składnik _a bedacy parametrem funkcji sinus - sin(_a*x)
	double calc(double x); //funkcja obliczajaca funkcje sinus dla zmiennej x pomnozonej przez _a
	
	Sin* clone() const //funkcja tworząca kopię/klona obiektu klasy Sin
	{
		return new Sin(*this);
	}

private:
	double _a; //parametr funkcji sinus 
};


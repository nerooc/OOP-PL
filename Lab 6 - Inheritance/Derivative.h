#pragma once
#include "Function.h"

class Derivative : public Function //pochodna klasa derivative, dziedzicząca publicznie po klasie Function
{ 
public:

	Derivative(Function* func) : _func(func) { //konstruktor klasy derivative, otrzymuje wskaźnik na funkcję klasy bazowej Function
		_dx = 0;
	};

	Derivative(const Derivative& obj) //konstruktor kopiujący klasy derivative, tworzący "głęboką" kopię
	{
		_func = obj._func->clone();
		_dx = obj._dx;
	}

	Derivative* clone() const //funkcja tworząca kopię/klona obiektu klasy derivative
	{
		return new Derivative(*this);
	}

	~Derivative() { //destruktor klasy derivative
		delete _func;
	};

	void set_dx(double dx); //funkcja set_dx pozwalająca ustalic skladnik dx potrzebny pozniej do obliczania pochodnych 
	double calc(double x); //funkcja calc, która sluzy do obliczania pochodnej z funkcji przechowywanej w składniku _func wraz z przekazaną wartością x

private: 
	Function* _func; //funkcja którą otrzymujemy w konstruktorze, z której liczona będzie pochodna
	double _dx; //krok rozniczkowania, uzywany w celu obliczenia pochodnej
};

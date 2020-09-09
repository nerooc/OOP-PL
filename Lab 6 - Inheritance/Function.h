#pragma once
#include <iostream>
#include <math.h>

#define M_PI 3.14159265358979323846 //w razie niedziałającego odgórnego define'a, tutaj jest zapasowy

class Function //klasa bazowa Function
{
public:
	Function() {}; //konstruktor klasy bazowej
	virtual ~Function() {}; //wirtualny destruktor klasy bazowej
	virtual Function* clone() const = 0; //wirtualna funkcja klonująca obiekt
	virtual double calc(double x) = 0; //czysto wirtualna metoda calc która w późniejszym etapie (W klasach pochodnych) służy do wykonywania działań
};


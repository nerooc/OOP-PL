#include <iostream>
#include <cmath>
#include <vector>
#include <string>

#pragma once
class Mean
{
	friend std::ostream& operator<<(std::ostream& o, const Mean& mean);
public:
	Mean() {}; //KONSTRUKTOR KLASY MEAN
	virtual ~Mean() {}; //DESTRUKTOR KLASY MEAN
	virtual double result() = 0; //CZYSTO WIRTUALNA FUNKCJA RESULT
	virtual Mean& operator<<(double x); //OPERATOR << DODAJĄCY ELEMENTY DO WEKTORA Z KTÓREGO JEST LICZONA SREDNIA
	virtual const Mean& operator<<(double x) const; //OPERATOR << DLA CONST WYPISUJACY BRAK MOZLIWOSCI DODAWANIA W PRZYPADKU CONST KLASY


private:
	std::vector<double> tab;
	std::string name;
};


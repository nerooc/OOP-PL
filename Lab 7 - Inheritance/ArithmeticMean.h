#pragma once
#include "Mean.h"
class ArithmeticMean :
	public Mean
{
public:
	ArithmeticMean() { //KONSTRUKTOR KLASY ARITHMETICMEAN
		name = "Arithmetic";
	};
	~ArithmeticMean() {}; //DESTRUKTOR KLASY ARITHMETICMEAN
	void reset(); //FUNKCJA RESETUJĄCA WEKTOR Z ELEMENTAMI
	double result(); //FUNKCJA ZWRACAJĄCA OBLICZONĄ ŚREDNIĄ
	//ArithmeticMean& operator<<(double x);
private:
	std::vector<double> tab; //WEKTOR TAB Z ELEMENTAMI
	std::string name; //NAZWA ŚREDNIEJ

};


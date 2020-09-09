#pragma once
#include "Mean.h"
class HarmonicMean :
	public Mean
{

public:
	HarmonicMean() { //KONSTRUKTOR KLASY HARMONIC MEAN
		name = "Harmonic";
	};
	~HarmonicMean() {}; //DESKTRUKTOR KLASY HARMONIC MEAN
	static HarmonicMean* create();//FUNKCJA TWORZACA NOWA INSTANCJE SREDNIEJ HARMONICZNEJ
	double result();//FUNKCJA ZWRACAJĄCA OBLICZONĄ ŚREDNIĄ


private:
	std::vector<double> tab; //WEKTOR TAB Z ELEMENTAMI
	std::string name;//NAZWA ŚREDNIEJ

};


#pragma once
#include "Data.h"


class Sum //klasa przechowujaca sume, dajaca mozliwosc dodawania do sumy
{
public:
	Sum() { //konstruktor sumy
		suma = 0;
	}
	
	~Sum(){} //destruktor
	
	void operator()(int n) { //operator pozwalajacy na dodawanie do sumy
		suma += n;
	}

	double value() { //funkcja zwracajaca wartosc sumy
		return suma;
	}

	double suma; //przechowywana suma
};

struct sum // struktura pozwalajaca na dodanie wszystkich elementow z klasy Data
{
	void operator()(double n) { sum += n; }
	double sum = 0;
};

Sum sumData(Data x); //funkcja globalna dodajaca wszystkie wartosci w elemencie Data i zapisujaca je w postaci klasy Sum

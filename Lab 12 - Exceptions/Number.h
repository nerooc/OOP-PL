#include <iostream>
#include <exception>

#pragma once

class Number //klasa przechowujaca liczbe w wybranym przez nas zakresie
{
public:

	Number(double num); //konstruktor w ktorym w razie wykroczenia poza zasieg rzucamy wyjatek
	~Number(); //destruktor
	double& value(); //funkcja zwracajaca referencje do przechowywanej liczby, przez co pozwala na zmiane wartosci
	const double& value() const; //wersja const, funkcja zwracajaca referencje do przechowywanej liczby, przez co pozwala na zmiane wartosci
	void print() const; //funkcja pozwalajaca na wypisanie naszej liczby i zakresu w jakim ma sie znajdowac
	static void setRange(int a, int b); //funkcja pozwalajaca na ustanowienie zakresu
	
private:

	double number; //zmienna przechowujaca nasza liczbe
	static int x;//zmienna x oznaczajaca poczatek wybranego zakresu
	static int y; //zmienna y oznaczajaca koniec wybranego zakresu
	
};


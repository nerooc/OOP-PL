#pragma once
#include <vector>
#include <iostream>
#include <functional>

namespace Functors{ //przestrzeń nazw Functors zawierająca klasy divisibleBy oraz greaterThan

	class divisibleBy{
		
	//klasa divisibleBy która reprezentuje funkcję sprawdzającą czy liczba podana w operatorze () jest podzielna przez liczbę podaną w konstruktorze, zwraca odpowiednią wartość bool

	public:
		divisibleBy(int num) : x(num){};
		//konstruktor zapisujący liczbę num
		~divisibleBy(){};
		//standardowy destruktor

		bool operator()(int test){ 
		//funkcja operatorowa sprawdzająca podzielność przy pomocy modulo
			return ((test % x) == 0);
		}

	private:
		int x; //liczba x czyli liczba przez którą dzielimy
	};

	class greaterThan{
		
	//klasa greaterThan która reprezentuje funkcję sprawdzającą czy liczba podana w operatorze () jest większa od liczby podanej w konstruktorze, zwraca odpowiednią wartość bool

	public:
		greaterThan(int num) : y(num){};
		//konstruktor zapisujący liczbę num
		~greaterThan(){};
		//standardowy destruktor

		bool operator()(int test){ 
		//funkcja operatorowa sprawdzająca czy liczba jest większa
			return (test > y);
		}

	private:
		int y; //liczba x czyli liczba z którą porównujemy
	};

}; // namespace Functors

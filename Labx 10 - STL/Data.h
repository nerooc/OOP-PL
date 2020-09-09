#pragma once

#include <array>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <memory>
#include <iostream>
#include <iomanip>

struct print_element { //struktura odpowiadajaca za wypisywanie pojedynczego elementu
	void operator()(double n) { std::cout << std::setw(6) << n; }
};

class Data //klasa Data przechowujaca string i wektor z danymi
{
public:
	Data(std::string x, std::vector<double> y){ //konstruktor
		str = x;
		vec = y;
	}
	
	~Data(){} //destruktor

	void print() const{ // funkcja wypisujaca
		std::cout << str <<":"; 
		std::for_each(std::begin(vec), std::end(vec), print_element()); //dla kazdego elementu 
		std::cout << std::endl;
	}

	std::vector<double> vec; //wektor w ktorym przechowujemy dane
	std::string str; //string trzymajacy dzien
};



#pragma once
#include <functional>
#include <vector>
#include "FilterCriteria.h"

class FilterCriteria{
    //klasa FilterCriteria zawierająca wektor funkcji przyjmujących int i zwracających bool służących do filtrowania wartości zapisanych w wektorze klasy List
public:
    FilterCriteria(){};
    //standardowy konstruktor klasy FilterCriteria
	
	~FilterCriteria(){};
	//standardowy destruktor klasy FilterCriteria
	
    void add(const std::function<bool(int)>&);
    //funkcja dodająca funkcję do wektora funcTab

    int size();
    //funkcja zwracająca rozmiar wektora funcTab

    const std::function<bool(int)> get(int);
    //funkcja zwracająca funkcję z wektora funcTab znajdującą się na miejscu o indeksie x

private:
    std::vector<std::function<bool(int)>> funcTab;
    //wektor funcTab zawierający funkcje przyjmujące int i zwracające bool
};

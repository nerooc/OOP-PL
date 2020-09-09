#pragma once
#include "Animal.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <memory>
#include <utility>
#include <map>

class Sheep : public Animal { //klasa opisujaca owce, dziedziczaca po klasie animal
public:
	explicit Sheep(const std::string& name) : Animal(name) { //konstruktor
		shaved = false;
	};
    
    ~Sheep(){ //glosny destruktor
        if (shaved) {
			std::cout << "- Owca " << name() << " ostrzyzona wraca do zagrody" << std::endl;;
		}
    }

	void print() const override { //funkcja wypisujaca owce razem z jej imieniem i stanem (ostrzyzona lub nie)
		if (shaved) {
			std::cout << "- Owca " << name() << " ostrzyzona" << std::endl;
		}
		else {
			std::cout << "- Owca " << name() << " nieostrzyzona" << std::endl;
		}
	}

	void shear() { //funkcja pozwalajaca na strzezenie owiec, zmienia stan (ostrzyzona lub nie)
		shaved = true;
	}


private:
	std::string _name; //string przechowujacy imie owcy
	bool shaved; //bool opisujacy stan owcy (ostrzyzona lub nie)
};

class Cow : public Animal { //klasa opisujaca krowe, dziedziczaca po klasie animal
public:
	explicit Cow(const std::string& name) : Animal(name) {}; //konstruktor klasy
	
	~Cow(){ //glosny destruktor
	    std::cout << "- Krowa " << name() << " wraca do obory" << std::endl;
	}

	void print() const override { //funkcja print wypisujaca krowe wraz z jej imieniem
		std::cout << "- Krowa " << name() << std::endl;
	}


private:
	std::string _name; //string przechowujacy imie krowy

};

class Horse : public Animal { //klasa opisujaca konia, dziedziczaca po klasie Animal
public:
	explicit Horse(const std::string& name) : Animal(name) {}; //konstruktor
	
	~Horse(){ //glosny destruktor
	    std::cout << "- Kon " << name() << " wraca do stajni" << std::endl;
	}

	void print() const override { //funkcja print wypisujaca konia wraz z jego imieniem
		std::cout << "- Kon " << name() << std::endl;
	}


private:
	std::string _name; //string przechowujacy imie konia

};
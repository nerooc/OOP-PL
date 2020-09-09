#include <string>
#include <iostream>
#pragma once

class Node //klasa bazowa dla klas NodeInt oraz NodeString
{
public:
	virtual void print() = 0; //czysto wirtualna funkcja wypisujaca zawartosc
	virtual Node* clone() const = 0; //czysto wirtualna funkcja klonujaca
	
	
	Node* next; //wskaznik na nastepny element listy
	int x;
	std::string str;
};

class NodeInt : public Node { //klasa bazowa opisujaca element listy o typie int
public:
	NodeInt(int n) :x(n), next(nullptr) {}; //konstruktor NodeInt wpisujacy dany int w zmienna x oraz przypisujacy na poczatku nullptr do nastepnej komorki
	
	void print() { //funkcja print wypisujaca zmienna x
		std::cout << x; 
	}
	NodeInt* clone() const override{ // klasa klonujaca obiekt klasy NodeInt oraz zwracajaca go
	    return new NodeInt(*this);
	}

	int x;
	Node* next;
};

class NodeString : public Node { //klasa bazowa opisujaca element listy o typie string
public:
	NodeString(std::string n) :str(n), next(nullptr) {};  //konstruktor NodeInt wpisujacy dany string w zmienna str oraz przypisujacy na poczatku nullptr do nastepnej komorki

	void print() { //funkcja print wypisujaca zmienna str
		std::cout << str; //wskaznik na nastepny element listy
	}
	
	NodeString* clone() const override{ // klasa klonujaca obiekt klasy NodeString oraz zwracajaca go
	    return new NodeString(*this);
	}

	std::string str; //zmienna str przechowuje naszego stringa
	Node* next; //wskaznik na nastepny element listy
};
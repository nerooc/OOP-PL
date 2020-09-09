#include <string>
#include <iostream>
#include "Nodes.h"

#pragma once
class PLinkedList //klasa opisujaca liste polaczona
{
	friend std::ostream& operator<<(std::ostream& o, const PLinkedList& List); //zaprzyjazniona funkcja operator<< zmieniajaca wypisywanie listy
public:
	PLinkedList() { //konstruktor standardowy przypisujacy nullptr do pierwszego elementu listy
		firstNode = nullptr;
	};

	PLinkedList(PLinkedList&& list) noexcept : firstNode(std::move(list.firstNode)) {//glosny konstruktor przenoszacy, ktory przenosi liste
	    		std::cout << "--- moving list:\n";
	} 

	PLinkedList& operator=(PLinkedList&& list) noexcept{ //glosny przenoszacy operator przypisania, przenosi liste
		firstNode = std::move(list.firstNode);
		std::cout << "--- move assign:\n";
		return *this;
	}

	PLinkedList(const PLinkedList& list) : firstNode(list.firstNode){//glosny kopiujący konstruktor, sluzy do kopiowania listy
	    std::cout << "--- copying list:\n";
	} 


	
	Node* head(); //funkcja zwracajaca adres pierwszego elementu listy
	PLinkedList addFront(Node* x); //funkcja dodajaca element do listy, zwraca nasza liste
private:
	Node* firstNode; //wskaznik na pierwszy element ktory "przechowuje" cala liste 
};


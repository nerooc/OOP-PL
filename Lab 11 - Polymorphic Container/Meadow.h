#pragma once
#include "Animals.h"

class Meadow //klasa ktora przechowuje zwierzeta 
{

public:

    Meadow(){} //konstruktor (tak na wszelkiwszelki wypadek)
    ~Meadow(){} //desktruktor (rowniez)
    
	void add(std::unique_ptr<Animal> newAnimal) { //funkcja add dodajaca nowe unique_ptr na zwierze do wektora
		animals.push_back(std::move(newAnimal));
	};

	void print(std::string string) const{ //funkcja wypisujaca zwierzeta i ich imiona znajdujace sie w wektorze
		std::cout << "=== " << string << " === " << std::endl;
		for (unsigned int i = 0; i < animals.size(); i++) {
			animals[i]->print();
		}
	}

	void countNames() { //funkcja liczaca wystepowanie imion wsrod zwierzat korzystajac z kontenera asocjacyjnego map
		std::map<std::string, int> map;
		
		for (auto& i : animals)
			map[i->name()]++;
			
		for (auto& p : map)
	    	std::cout << p.first << ": " << p.second << "\n";
	}

	std::vector<Sheep*> getSheepHerd() { //funkcja ktora z wektora wszystkich zwierzat wyciaga jedynie owce i zwraca je w wektorze
		std::vector<Sheep*> temp;

		for (unsigned int i = 0; i < animals.size(); i++) {
			
			if (animals[i]-> name() == "Bernadeta"|| animals[i]->name() == "Beata") {
				temp.push_back(dynamic_cast<Sheep*>(animals[i].get()));
			}
		}
		
		return temp;
    
	}
	
private:
	std::vector<std::unique_ptr<Animal>> animals; //wektor przechowujacy unique_ptr'y na zwierzeta

};


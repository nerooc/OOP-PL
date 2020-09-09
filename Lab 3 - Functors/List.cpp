#include "List.h"
#include <iostream>
#include <vector>
#include <functional>


void List::print(const std::string &info) const{
    std::cout << info;

    std::cout << "[";

    for (int i = 0; i < tab.size(); i++){
        std::cout << " " << tab[i] << " ";
    }

    std::cout << "]" << std::endl;
}

void List::insert(int element){
    tab.push_back(element);
}

int &List::operator[](int integer){
    return tab[integer];
}

List List::filter(const std::function<bool(int)> func){
    
	List temp;

    for (int i = 0; i < tab.size(); i++){
		
        if (func(tab[i])){ //przepisujemy filtrując interesujące nas odpowiedzi za pomocą funkcji
            temp.tab.push_back(tab[i]);
        }
		
    }

    return temp;
}

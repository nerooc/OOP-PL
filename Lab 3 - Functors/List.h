#pragma once
#include <vector>
#include <functional>

class List //klasa list zawierająca wektor zmiennych typu int
{

public:
    List(){}; //standardowy konstruktor klasy List

    void print(const std::string & = "") const;
    //funkcja wypisująca elementy tablicy w nawiasach kwadratowych (a jeżeli w argumencie podany jest string, to przed elementami wypisuje również jego)

    void insert(int);
    //funkcja wstawiająca nowe zmienne do tab

    int &operator[](int);
    //operator nawiasów kwadratowych których przyjmuje liczbę int, która jest indeksem oraz zwraca referencję do elementu wektora tab o indeksie z argumentu

    List filter(const std::function<bool(int)>);
    //funkcja filtrująca wektor "tab" korzystając z funkcji zawartych w namespace Functors, podanych przez klasę FilterCriteria

private:
    std::vector<int> tab;
    //wektor tab o elementach typu int
};

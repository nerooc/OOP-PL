#pragma once
#include <iostream>
#define PI 3.14159265359 //zdefiniowana wartosc PI do uzycia w celu obliczania pola kola

//Skorzystalem z takiej hierarchii dziedziczenia, poniewaz klasy Drawable, Transformable i ClosedShape to klasy abstrakcyjne,
//ktore posiadaja czysto wirtualne metody, ktore moga byc uzyte dla wielu figur, ale tez nie wszystkich. Na przyklad metody
//draw i shift pasuja do wszystkich naszych klas pochodnych (oprocz Point, choc w zasadzie tez moglibysmy to zrobic), kiedy
//to ClosedShape jest juz klasa bardziej ograniczona, gdyz na przyklad linia nie ma pola - tak samo punkt.
//
////Klasy abstrakcyjne////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Drawable {//klasa abstrakcyjna, interfejs obsługujacy rysowanie obiektu
public:
	virtual void draw() const = 0; //funkcja czysto wirtualna, dzieki ktorej mozemy rysowac obiekty klas pochodnych
};

class Transformable { //klasa abstrakcyjna, interfejs obslugujacy przesuwanie (transformacje) obiektu
public:
	virtual void shift(double a, double b) = 0; //funkcja czysto wirtualna, dzieki ktorej mozemy przesuwac obiekty klas pochodnych

};

class ClosedShape { //klasa abstrakcyjna, interfejs obslugujacy obiekty bedace figurami zamknietymi
public: 
	virtual double area() const = 0; //funkcja czysto wirtualna, dzieki ktorej mozemy odczytac pole figury zamknietej
};

////Klasa Point///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Point { //klasa opisujaca punkt
    friend std::ostream& operator<<(std::ostream& o, const Point& point) { //operator<< umozliwiajacy wypisywanie wspolrzednych punktu w wygodniejszy sposob
	    return o << "(" << point.x << ", " << point.y << ")";
    };
    
public:
	Point(double a, double b) : x(a), y(b) {}; // konstruktor inicjalizujacy wspolrzedne punktu
	
	//tutaj powinny byc private wspolrzedne, a powyzej get i set wspolrzedne, jednak wole nie ryzykowac w ostatnich minutach kompilującego się programu :) 
	double x; //wspolrzedne punktu
	double y;

};

////Klasy Pochodne////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Circle : public Drawable, public Transformable, public ClosedShape { //klasa opisujaca kolo
    
public:
	Circle(Point x, double r) : X(x), R(r){}; //konstruktor inicjalizujacy punkt oraz promien kola
	
	void draw() const override{ //nadpisanie funkcji draw() z klasy abstrakcyjnej Drawable, pozwala na rysowanie kola
		std::cout << "++ Rysuje kolo o srodku " << X << " i promieniu " << R <<std::endl; 
	}

	void shift(double a, double b) override { //nadpisanie funkcji shift(double,double) z klasy abstrakcyjnej Transformable, pozwala na przesuwanie kola
		X.x += a;
		X.y += b;
	}

	double area() const override { //nadpisanie funkcji area() z klasy abstrakcyjnej ClosedShape, pozwala na wypisanie pola kola
		return PI * R * R;
	}
private:
    Point X; //srodek kola
	double R; //promien kola
	
};


class Line : public Drawable, public Transformable { //klasa opisujaca linie
    
public:
	Line(Point x, Point y) : X(x), Y(y) {} //konstruktor inicjalizujacy punkt poczatkowy i punkt koncowy linii

	void draw() const override { //nadpisanie funkcji draw() z klasy abstrakcyjnej Drawable, pozwala na rysowanie linii
		std::cout << "++ Rysuje linie od " << X << " do " << Y << std::endl;
	}

	void shift(double a, double b) override { //nadpisanie funkcji shift(double,double) z klasy abstrakcyjnej Transformable, pozwala na przesuwanie linii
		X.x += a;
		X.y += b;

		Y.x += a;
		Y.y += b;
	}

private:
	Point X; //punkt w ktorym zaczyna sie linia
	Point Y; //punkt w ktorym linia sie konczy

};


class Rectangle : public Drawable, public Transformable, public ClosedShape { //klasa opisujaca prostokat
    
public:
	Rectangle(Point x, Point y) : X(x), Y(y) {} //konstruktor inicjalizujacy rogi prostokata

	void draw() const override {//nadpisanie funkcji draw() z klasy abstrakcyjnej Drawable, pozwala na rysowanie prostokata
		std::cout << "++ Rysuje prostokat o rogach w " << X << " i " << Y << std::endl;
	}

	void shift(double a, double b) override { //nadpisanie funkcji shift(double,double) z klasy abstrakcyjnej Transformable, pozwala na przesuwanie prostokata
		X.x += a;
		X.y += b;

		Y.x += a;
		Y.y += b;
	}

	double area() const override { //nadpisanie funkcji area() z klasy abstrakcyjnej ClosedShape, pozwala na wypisanie pola kola
		return abs((X.x - Y.x) * (X.y - Y.y));
	}
	
private:
	Point X; //punkty opisujace rogi prostokata
	Point Y;
	
};

////Funkcje globalne////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void draw(Drawable* x) { //funkcja globalna draw() ktora wywoluje metody dla obiektow klasy pochodnej od klasy Drawable
	x->draw();
}

//

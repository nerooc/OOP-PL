#pragma once
#include <iostream>


class Complex{
/*Klasa Complex opisująca liczbę urojoną, zawiera składniki _x (część rzeczywista) oraz _y (część urojona). */
friend std::ostream& operator << (std::ostream& out, const Complex& complex); //deklaracja przyjaźni

public:
    Complex(double x, double y); //Konstruktor
   
    double& im(); //Funkcja zwracająca część urojoną liczby zespolonej
    double& re(); //Funkcja zwracająca część rzeczywistą liczby zespolonej
    double const & re() const; //Jak wyżej, jednak przyjmuje const i zwraca const
    double const & im() const; //Jak wyżej, jednak przyjmuje const i zwraca const

    Complex operator + (const Complex& complex) const;  //Operator "+" dodający liczby zespolone
    Complex& operator ++(); //Operator "++" który jest preinkrementacją liczby zespolonej
    Complex operator ++(int); //Operator "++" który jest postinkrementacją liczby zespolonej

private:
    double _x; //Składowa rzeczywista liczby zespolonej
    double _y; //Składowa urojona liczby zespolonej

};

std::ostream& operator << (std::ostream& out, const Complex& complex); // Operator "<<" wypisujący liczbę zespoloną w poprawny sposób (matematycznie)

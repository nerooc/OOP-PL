#include "Complex.h"


Complex::Complex(double x, double y) : _x(x), _y(y){};

double& Complex::re(){
    return _x;
}

double& Complex::im(){
    return _y;
}

double const & Complex::re() const{
    return _x;
}

double const & Complex::im() const{
    return _y;
}

Complex Complex::operator + (const Complex& complex) const{
    Complex temp{*this};
    temp._x += complex._x;
    temp._y += complex._y;
    return temp;
}

Complex& Complex::operator ++ (){
    ++_x;
    ++_y;
    return *this;
}

Complex Complex::operator ++ (int){ 
    _x++;
    _y++;
    return *this;

}

std::ostream& operator << (std::ostream& out, const Complex& complex){
    std::cout << "(" << complex._x << " + " << complex._y << "*i)";
}


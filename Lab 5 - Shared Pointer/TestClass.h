#pragma once
#include <iostream>
#include <string>

class TestClass
{
public:
    TestClass(std::string nazwa) : name(nazwa)
    {
        std::cout << "++ Tworze obiekt TestClass: " << name << std::endl;
    };

    TestClass()
    {

        name = "";

        std::cout << "++ Tworze obiekt TestClass: " << name << std::endl;
    }

    ~TestClass()
    {
        std::cout << "-- Usuwam obiekt TestClass: " << name << std::endl;
    };

    std::string info() const;

private:
    std::string name;
};
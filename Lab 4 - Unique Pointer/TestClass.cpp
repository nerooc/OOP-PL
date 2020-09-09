#include "TestClass.h"

std::string TestClass::info() const
{
    return name;
}

void TestClass::setName(std::string newName)
{
    name = newName;
}
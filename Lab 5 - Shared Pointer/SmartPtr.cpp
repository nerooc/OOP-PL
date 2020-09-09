
#include "SmartPtr.h"

TestClass *SmartPtr::operator->() const
{
    return ptr;
}

TestClass &SmartPtr::operator*() const
{
    return *ptr;
}

int SmartPtr::useCount()
{
    return counter->count;
}

SmartPtr &SmartPtr::operator=(const SmartPtr &obj)
{
    if (counter->release() == 0)
    {
        std::cout << "tescik" << std::endl;
        delete ptr;
        delete counter;
    }

    ptr = obj.ptr;
    counter = obj.counter;
    counter->increment();
    return *this;
}
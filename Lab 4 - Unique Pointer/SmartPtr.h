#pragma once
#include "TestClass.h"
#include <iostream>
#include <string>

class SmartPtr
{

public:
    SmartPtr(TestClass *p)
    {
        ptr = p;
        p = nullptr;
    }

    SmartPtr(SmartPtr &&obj)
    {
        ptr = std::move(obj.ptr);
        obj.ptr = nullptr;
        //std::exchange
    }

    ~SmartPtr()
    {
        delete ptr;
    }

    TestClass *get();

    TestClass *release();

    TestClass *operator->() const;

    TestClass &operator*() const;

    void operator<=(SmartPtr) = delete;
    void operator>=(SmartPtr) {}
    void operator>(SmartPtr) {}
    void operator<(SmartPtr) {}
    void operator!=(SmartPtr) {}
    void operator==(SmartPtr) {}

    SmartPtr &operator=(SmartPtr &&);

    operator bool() const
    {

        if (ptr != nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    using ptrType = TestClass; //lub jak wymiennie typedef jak było wcześniej

private:
    TestClass *ptr;
};

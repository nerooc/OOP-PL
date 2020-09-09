#pragma once
#include "TestClass.h"
#include <iostream>
#include <string>

struct CT
{
    int count;

    int release()
    {
        return --count;
    }

    void increment()
    {
        count++;
    }
};

class SmartPtr
{

public:
    SmartPtr()
    {
        counter = new CT;
        counter->count = 0;
        counter->increment();
    }

    SmartPtr(TestClass *p)
    {
        counter = new CT;
        counter->count = 0;
        counter->increment();
        ptr = p;
    }

    SmartPtr(const SmartPtr &obj)
    {
        ptr = obj.ptr;
        counter = obj.counter;
        counter->increment();
    }

    ~SmartPtr()
    {
        if (counter->release() == 0)
        {
            delete ptr;
            delete counter;
        }
    }

    int useCount();

    SmartPtr &operator=(const SmartPtr &);

    TestClass *
    operator->() const;

    TestClass &operator*() const;

private:
    TestClass *ptr;
    CT *counter;
};

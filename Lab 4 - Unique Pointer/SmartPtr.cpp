
#include "SmartPtr.h"

TestClass *SmartPtr::operator->() const
{
    return ptr;
}

TestClass *SmartPtr::get()
{
    return ptr;
}

TestClass *SmartPtr::release()
{
    //od czasu kiedy napisałem dzis pierwszego maila zrobiłem tu minimalne zmiany które sprawily ze usuwanie test_D sie pojawilo, lecz nie jestem wciaz pewny czy o to chodzi
    delete ptr;
    ptr = nullptr;

    return ptr;
}

TestClass &SmartPtr::operator*() const
{
    return *ptr;
}

SmartPtr &SmartPtr::operator=(SmartPtr &&obj)
{
    delete (ptr);
    ptr = std::move(obj.ptr);

    obj.ptr = nullptr;

    return *this;
}

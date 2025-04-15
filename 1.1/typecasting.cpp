#include <iostream>
using namespace std;

void modifyConst(const int *ptr)
{
    int *modifiable = const_cast<int *>(ptr);
    *modifiable = 50;
}

class Base
{
public:
    virtual void show() { cout << "Base class" << endl; }
};

class Derived : public Base
{
public:
    void show() override { cout << "Derived class" << endl; }
};

int main()
{

    char g = 'A';
    int v = g; // Implicit conversion from chat to int
    double pi = 3.14159;
    int intPi = (int)pi; // C-style casting
    cout << "C-Style Casting: " << intPi << endl;

    float n = 9.75;
    int intNum = static_cast<int>(n); // Explicitly converting float to int
    cout << "static_cast: " << intNum << endl;

    int n2 = 65;
    char *charPtr = reinterpret_cast<char *>(&n2);
    cout << "reinterpret_cast: " << *charPtr << endl; // May print 'A'

    const int n3 = 10;
    cout << "Before: " << n3 << endl;
    modifyConst(&n3);
    cout << "After: " << n3 << endl; // Undefined behavior in some cases

    Base *basePtr = new Derived();
    Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);

    if (derivedPtr)
    {
        derivedPtr->show(); // Successfully casts base pointer to derived
    }
    else
    {
        cout << "Cast failed" << endl;
    }

    delete basePtr;

    cout << v << endl;
    return 0;
}
#include <iostream>
using namespace std;

// Virtual Functions

class Base
{
public:
    virtual void print()
    {
        cout << "print func of Base Class" << endl;
    }
    void display()
    {
        cout << "display func of Base Class" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "print func of Derived Class" << endl;
    }
    void display()
    {
        cout << "display func of Derived Class" << endl;
    }
};

int main()
{
    Base *baseptr;
    Derived d;
    baseptr = &d;

    baseptr->print();

    baseptr->display();

    return 0;
}
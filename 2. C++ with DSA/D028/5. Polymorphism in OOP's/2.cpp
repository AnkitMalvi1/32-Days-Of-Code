#include <iostream>
using namespace std;

// Function Overloading

class Roast
{
public:
    void fun()
    {
        cout << "Function with no args." << endl;
    }
    void fun(int x)
    {
        cout << "Function with int arg." << endl;
    }
    void fun(double x)
    {
        cout << "Function with double arg." << endl;
    }
};

int main()
{
    Roast obj;
    obj.fun();
    obj.fun(4);
    obj.fun(9.3);

    return 0;
}
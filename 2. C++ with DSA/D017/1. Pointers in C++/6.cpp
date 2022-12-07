// Swap Function without Pointer :- Call by Value

#include <iostream>
using namespace std;

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;
}

int main()
{
    int a = 2;
    int b = 4;

    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}
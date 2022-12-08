// 1. Clear Bit
// n= 0101 = position(3 2 1 0) =5
// suppose we need to clear bit at position i=2

#include <iostream>
using namespace std;

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int main()
{
    cout << clearBit(5, 2) << endl;

    return 0;
}
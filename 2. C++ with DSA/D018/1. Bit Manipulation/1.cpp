// 1. Get Bit
// n= 0101 = position(3 2 1 0) =5
// suppose we need to get bit at position i=2

#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{
    cout << getBit(5, 2) << endl;

    return 0;
}
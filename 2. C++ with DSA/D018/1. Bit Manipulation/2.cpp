// 2. Set Bit
// n= 0101 = position(3 2 1 0) =5
// suppose we need to set bit at position i=1

#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;

    return 0;
}
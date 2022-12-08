// 4. Update Bit
// n= 0101 = position(3 2 1 0)
// suppose we need to update bit at position i=1 to 1

#include <iostream>
using namespace std;

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}

int main()
{
    cout << updateBit(5, 1, 1) << endl;

    return 0;
}
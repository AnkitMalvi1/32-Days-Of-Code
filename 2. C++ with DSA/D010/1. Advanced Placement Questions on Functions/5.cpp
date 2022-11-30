// Decimal To Binary

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

void decimalToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // reverse the remainder
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
}

void decimalToOctal(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    // reverse the remainder
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
}

int main()
{
    int n;
    cin >> n;
    decimalToBinary(n);
    cout << endl;
    decimalToOctal(n);
    return 0;
}
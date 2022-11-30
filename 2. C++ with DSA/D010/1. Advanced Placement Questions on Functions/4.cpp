// Binary to Decimal
// Octal to Decimal

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

void binaryToDecimal(int n)
{
    int ans = 0;
    int last;
    int i = 0;
    while (n > 0)
    {
        last = n % 10;
        ans = ans + (last * pow(2, i));
        i++;
        n /= 10;
    }
    cout << ans;
}

void octalToDecimal(int n)
{
    int ans = 0;
    int last;
    int i = 0;
    while (n > 0)
    {
        last = n % 10;
        ans = ans + (last * pow(8, i));
        i++;
        n /= 10;
    }
    cout << ans;
}

int main()
{
    int n;
    cin >> n;
    binaryToDecimal(n);
    cout << endl;
    octalToDecimal(n);
    return 0;
}
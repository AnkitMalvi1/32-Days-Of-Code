// 3. Armstrong or not

#include <iostream>
// #include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int originalNum = n;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit * lastDigit * lastDigit;
        n /= 10;
    }

    // if (sum == originalNum)
    // {
    //     cout << "Armstrong";
    // }
    // else
    // {
    //     cout << "Not Armstrong";
    // }

    (sum == originalNum) ? cout << "Armstrong" : cout << "Not Armstrong";

    return 0;
}
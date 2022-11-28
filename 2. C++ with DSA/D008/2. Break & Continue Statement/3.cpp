#include <iostream>
using namespace std;

// prime or not

int main()
{
    int n;
    cin >> n;
    int i;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non prime";
            break;
        }
    }
    if (i == n)
    {
        cout << "prime";
    }

    return 0;
}
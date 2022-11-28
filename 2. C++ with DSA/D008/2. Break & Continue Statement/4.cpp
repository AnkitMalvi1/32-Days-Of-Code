#include <iostream>
using namespace std;

// print all prime no.s in between a to b

int main()
{
    // 2 for loops
    // outer loop: for range a to b
    // inner loop: for divisible or not
    int a, b;
    cin >> a >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << i << endl;
        }
    }

    return 0;
}
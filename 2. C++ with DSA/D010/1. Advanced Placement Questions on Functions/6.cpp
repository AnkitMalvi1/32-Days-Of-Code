// Binary Addition

#include <iostream>
using namespace std;
int main()
{
    int a[3];
    int b[3];
    int carry = 0;
    int result[7];

    a[0] = 1;
    a[1] = 0;
    a[2] = 0;
    a[3] = 1;

    b[0] = 1;
    b[1] = 1;
    b[2] = 1;
    b[3] = 1;

    for (int i = 0; i <= 3; i++)
    {
        if (a[i] + b[i] + carry == 0)
        {
            result[i] = 0;
            carry = 0;
        }

        if (a[i] + b[i] + carry == 1)
        {
            result[i] = 0;
            carry = 0;
        }

        if (a[i] + b[i] + carry == 2)
        {
            result[i] = 0;
            carry = 1;
        }

        if (a[i] + b[i] + carry > 2)
        {
            result[i] = 1;
            carry = 1;
        }
    }
    for (int j = 0; j <= 7; j++)
    {
        cout << result[j] << " ";
    }
    system("pause");
}
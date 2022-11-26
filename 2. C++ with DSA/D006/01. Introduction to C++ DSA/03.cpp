#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int div = 2;

    while (div < n)
    {
        if (n % div == 0)
        {
            printf("Non-Prime\n");
            return div + 1;
        }
        else
        {
            div++;
        }
    }
    printf("Prime");

    return 0;
}
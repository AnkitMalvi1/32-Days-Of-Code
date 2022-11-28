// divisible by 3 /not print

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 34; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
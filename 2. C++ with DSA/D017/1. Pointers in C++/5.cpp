// 5. Pointer to Pointer

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aptr = &a;

    cout << *aptr << endl;

    int **q = &aptr;
    cout << *q << endl;
    cout << **q << endl;

    return 0;
}
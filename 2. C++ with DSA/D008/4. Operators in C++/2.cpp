// pre and post incrementer & decrementer
// i++  ++i  --i  i--

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    //  1           3
    i = i++ + ++i;
    cout << i; // 4

    return 0;
}
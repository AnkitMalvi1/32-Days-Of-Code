#include <iostream>
using namespace std;

int main()
{
    char expression;
    cin >> expression;
    switch (expression)
    {
    case 'a':
        cout << "Hello";
        break;

    case 'b':
        cout << "Namste";
        break;

    default:
        cout << "Nothing" << endl;
        break;
    }

    return 0;
}
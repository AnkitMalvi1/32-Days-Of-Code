// 1. BacDef

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "fcdvbdnvd";
    // convert into upper case

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    // convert into lower case

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;

    return 0;
}
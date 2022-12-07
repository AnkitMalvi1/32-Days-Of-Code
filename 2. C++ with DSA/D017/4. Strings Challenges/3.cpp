// 2. "53214" --> "54321"

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "1567246";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;

    return 0;
}
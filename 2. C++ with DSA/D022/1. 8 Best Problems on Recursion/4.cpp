// 4. Remove all duplicates from the string  "aaabbbeeecdddd" --> "abecd"

#include <iostream>
using namespace std;

string removeDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{
    cout << removeDup("aaabbbeeecdddd") << endl;

    return 0;
}
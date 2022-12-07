#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "heyboy";
    string str1(5, 'n');
    cout << str << endl;
    cout << str1 << endl;

    string str2;
    // getline(cin, str2);
    // cout << str2 << endl;

    string s1 = "fam";
    string s2 = "ily";
    // s1.append(s2);
    // cout << s1 + s2 << endl;
    s1 = s1 + s2;
    cout << s1 << endl;
    cout << s1[1] << endl;

    string abc = "db jnjsc nsj";
    abc.clear();
    cout << abc << endl;

    string a1 = "abc";
    string a2 = "xyz";
    cout << s2.compare(s1) << endl;

    return 0;
}
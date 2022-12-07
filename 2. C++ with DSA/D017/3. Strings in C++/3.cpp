#include <iostream>
using namespace std;

int main()
{
    string s1 = "djjvvcjjcv";
    // s1.erase(3, 4);
    // cout << s1 << endl;
    cout << s1.find("jcv") << endl;
    s1.insert(3, "mine");
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.length() << endl;

    string str = "go went gone";
    for (int i = 0; i < s1.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    string s = str.substr(6, 4);
    cout << s << endl;

    string s2 = "768";
    int x = stoi(s2);
    cout << x * 2 << endl;
    int y = 234;
    cout << to_string(y) + "99" << endl;

    return 0;
}
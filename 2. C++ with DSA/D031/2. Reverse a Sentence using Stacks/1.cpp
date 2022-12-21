#include <iostream>
#include <stack>
using namespace std;

// Hey, how are you doing?
// doing? you are how Hey,

// STL Full Form in C++ : Standard Template Library

void reverseSentence(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s = "Hey, how are you doing?";
    reverseSentence(s);

    return 0;
}
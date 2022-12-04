// 1. Max till i
// Problem: Given an array a[] of size n, for every i from 0 to n-1
// output max(a[0],a[1],...,a[i]).

#include <iostream>
using namespace std;

int main()
{
    int mx = -19999999;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout << mx << endl;
    }

    return 0;
}
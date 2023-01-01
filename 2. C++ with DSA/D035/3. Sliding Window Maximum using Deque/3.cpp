// Sliding Window Maximum
// [1,3,-1,-3,5,3,6,7]
// K=3
// 3  3  5  5  6  7
// Return the Maximum Value from each Sub-sequences of window key of 3.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    deque<int> q;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() and a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);

    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }
        while (!q.empty() and a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

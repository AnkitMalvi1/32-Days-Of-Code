// 1. Check if an array is sorted or not

#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int arr[] = {1, 4, 3, 4, 5};
    cout << sorted(arr, 5) << endl;
    return 0;
}
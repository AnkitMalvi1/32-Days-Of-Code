// Q1. Write a program to find a unique number in an array where all numbers except one, are present twice  {2,4,6,3,4,6,2}

// XOR operation gives 1 only in condition of :-
// 0 XOR 0= 0
// 0 XOR 1= 1
// 1 XOR 0= 1
// 1 XOR 1= 0

#include <iostream>
using namespace std;

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[] = {2, 4, 6, 3, 4, 6, 2};
    cout << unique(arr, 7);

    return 0;
}
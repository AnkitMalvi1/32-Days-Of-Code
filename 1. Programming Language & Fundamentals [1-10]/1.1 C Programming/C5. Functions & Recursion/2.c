#include <stdio.h>

int calcSquare(int n);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Squre : %d", calcSquare(n));

    return 0;
}

int calcSquare(int n)
{
    return n * n;
}
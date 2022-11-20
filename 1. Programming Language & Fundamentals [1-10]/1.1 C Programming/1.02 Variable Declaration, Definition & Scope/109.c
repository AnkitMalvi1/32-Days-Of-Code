#include <stdio.h>
extern int x = 9;
int z = 10;
typedef long long int LL;

void calSquare(int arg)
{
    printf("The square of %d is %d\n", arg, arg * arg);
}

int main(void)
{
    const int a = 32;
    char b = 'G';
    extern int z;
    LL c = 1000000;

    printf("Hello World!\n");

    x = 2;
    z = 5;

    while (x > 0)
    {
        static int y = 5;
        y++;
        printf("The value of y is %d\n", y);
        x--;
    }

    calSquare(5);
    return 0;
}
#include <stdio.h>

int main()
{
    int marks[3];
    printf("physics: ");
    scanf("%d", &marks[0]);

    printf("chemistry: ");
    scanf("%d", &marks[1]);

    printf("maths: ");
    scanf("%d", &marks[2]);

    printf("physics=%d\n", marks[0]);
    printf("chemistry=%d\n", marks[1]);
    printf("maths=%d\n", marks[2]);

    return 0;
}
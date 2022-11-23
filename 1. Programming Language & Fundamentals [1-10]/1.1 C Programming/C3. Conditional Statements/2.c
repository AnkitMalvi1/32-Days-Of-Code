#include <stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    age > 18 ? printf("Adult\n") : printf("kid");

    int number = 23;
    int luckyNumber = 23;

    number == luckyNumber ? printf("you're lucky") : printf("you're not lucky");

    return 0;
}
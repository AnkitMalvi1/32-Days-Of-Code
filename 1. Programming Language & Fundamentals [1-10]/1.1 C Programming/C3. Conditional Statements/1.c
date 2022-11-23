// #include <stdio.h>

// int main()
// {
//     int age = 23;

//     if (age <= 18)
//         printf("It's a kid or teenage");
//     else
//         printf("It's a Adult");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int number;
//     scanf("%d", &number);

//     if (number % 2 == 0)
//         printf("Even");
//     else
//         printf("Odd");
//     return 0;
// }

#include <stdio.h>

int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Adult");
    else if (age < 18 && age >= 12)
        printf("Teenage");
    else
        printf("Child");

    return 0;
}
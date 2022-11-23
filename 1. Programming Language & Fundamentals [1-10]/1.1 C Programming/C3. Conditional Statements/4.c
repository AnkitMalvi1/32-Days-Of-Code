#include <stdio.h>
#include <math.h>

int main()
{
    char day = 'w';

    switch (day)
    {
    case 'm':
        printf("Monday");
        break;
    case 't':
        printf("Tuesday");
        break;
    case 'w':
        printf("Wednesday");
        break;
    case 'T':
        printf("Thursday");
        break;
    case 'f':
        printf("Friday");
        break;
    case 's':
        printf("Saturday");
        break;
    case 'S':
        printf("Sunday");
        break;
    }

    return 0;
}
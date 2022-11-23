#include <stdio.h>

int main()
{
    printf("%d\t", 3 < 4 && 3 < 5);
    printf("%d\t", 3 < 4 && 5 < 4);

    printf("%d\t", 3 < 4 && 5 > 4);
    printf("%d\t", 3 > 4 && 5 > 4);
    printf("%d\t", 3 < 4 && 3 < 5);

    printf("%d\t", !(3 < 4 && 3 < 5));
    printf("%d\t", !(4 < 3 || 5 < 3));
    return 0;
}
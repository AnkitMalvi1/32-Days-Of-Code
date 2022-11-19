#include <stdio.h>
#include <limits.h>

int main()
{
    printf("%d \n %d\n %zu\n %zu", INT_MAX, INT_MAX, sizeof(int), sizeof(int) * CHAR_BIT);
}
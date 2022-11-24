#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Ankit Malviya";
    char class[] = {'B', 'T', 'e', 'c', 'h', ' ', 'C', 'S', 'E', '\0'};

    // print String
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", class[i]);
    }
    printf("\n");

    // print string with pointer
    for (char *ptr = name; *ptr != '\0'; ptr++)
        printf("%c", *ptr);
    printf("\n");

    // print using format specifier
    printf("%s\n", name);

    // input a string
    char fName[40];
    scanf("%s", fName);
    printf("FirstName: %s\n", fName);

    char fullName[40];
    scanf("%s", fullName);
    printf("FullName: %s\n", fullName);

    // gets & puts
    char fulName[40];
    scanf("%s", fulName);
    printf("Enter FullName: ");
    fgets(fulName, 40, stdin);
    puts(fulName);

    // library functions
    char _name[] = "Ankit";
    int length = strlen(_name);
    printf("The length of name: %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);

    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);

    char str1[] = "Apple";
    char str2[] = "banana";
    printf("%d\n", strcmp(str1, str2));

    // enter string using %c
    printf("Enter String: ");
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0;
}
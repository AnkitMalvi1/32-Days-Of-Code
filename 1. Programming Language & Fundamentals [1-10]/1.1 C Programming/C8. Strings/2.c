#include <stdio.h>
#include <string.h>

// void checkChar(char str[], char ch);
// int countVowels(char str[]);
// void slice(char str[], int n, int m);
// void salting(char password[]);
// int countLength(char str[]);
void printString(char arr[]);

int main()
{
    char str[] = "AnkitMalviya";
    char ch = 'x';
    // checkChar(str, ch);

    // countVowels(str);
    // printf("%d is the count of Vowels", countVowels(str));

    // slice(str, 4, 8);

    // salting(str);

    // countLength(str);
    // printf("Length of String : %d", countLength(str));

    printString(str);

    return 0;
}

// void checkChar(char str[], char ch)
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ch)
//         {
//             printf("character is present!");
//             return;
//         }
//     }
//     printf("character is not present!");
// }

// int countVowels(char str[])
// {
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             count++;
//         }
//     }
//     return count;
// }

// void slice(char str[], int n, int m)
// {
//     char newStr[100];
//     int j = 0;
//     for (int i = n; i <= m; i++, j++)
//     {
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     puts(newStr);
// }

// void salting(char password[])
// {
//     char salt[] = "123";
//     char newPass[200];

//     strcpy(newPass, password);
//     strcat(newPass, salt);
//     puts(newPass);
// }

// int countLength(char str[])
// {
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count - 1;
// }

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
        printf("%c", arr[i]);
    printf("\n");
}
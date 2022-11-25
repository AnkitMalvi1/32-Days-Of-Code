#include <stdio.h>
#include <string.h>

// user defined
typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct CSStudent
{
    int roll;
    float cgpa;
    char name[100];
} css;

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

struct vector
{
    int x, y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

struct complex
{
    int real, img;
};

typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    acc acc1 = {125, "Dilip"};
    acc acc2 = {126, "Evil"};
    acc acc3 = {127, "Gagan"};

    print("acc no= %d ", acc1.accountNo);
    print("acc name= %s ", acc1.name);

    struct vector v1, v2, sum;
    v1.x = 3;
    v1.x = 4;
    v1.x = 5;
    v1.x = 6;

    calcSum(v1, v2, sum);

    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    print("sum of x: %d\n", sum.x);
    print("sum of y: %d\n", sum.y);
}
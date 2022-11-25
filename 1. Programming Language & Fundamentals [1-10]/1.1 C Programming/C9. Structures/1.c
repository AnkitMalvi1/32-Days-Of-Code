#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

typedef struct CSStudent
{
    int roll;
    float cgpa;
    char name[100];
} css;

void printInfo(struct student s1);

int main()
{
    struct student s1;
    strcpy(s1.name, "Ankit");
    s1.roll = 24;
    s1.cgpa = 9.0;

    printf("Student Info : \n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll);
    printf("CGPA: %f\n", s1.cgpa);

    // array of structures
    struct student CSE[50];
    struct student EE[50];
    struct student CE[50];

    // declaration
    struct student s2 = {"Bharat", 1240, 8.6};
    struct student s3 = {0};

    printf("roll no of s2= %d\n", s2.roll);
    printf("roll no of s3= %d\n", s3.roll);

    // pointer to structure
    struct student *ptr = &s1;
    printf("student.name= %s\n", (*ptr).name);
    printf("student.roll= %d\n", (*ptr).roll);
    printf("student.cgpa= %f\n", (*ptr).cgpa);

    // arrow operator
    printf("student->name= %s\n", ptr->name);
    printf("student->roll= %d\n", ptr->roll);
    printf("student->cgpa= %f\n", ptr->cgpa);

    // Passing structure to function
    printInfo(s1);

    // typedef keyword
    css student1;
    strcpy(student1.name, "Chetan");
    student1.roll = 25;
    student1.cgpa = 9.1;

    return 0;
}

void printInfo(struct student s1)
{
    printf("Student Info : \n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll);
    printf("CGPA: %f\n", s1.cgpa);

    // change
    s1.roll = 56;
}

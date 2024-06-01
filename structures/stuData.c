#include <stdio.h>
#include <string.h>

// user define

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    {
        s1.roll = 34466;
        s1.cgpa = 3.89;
        strcpy(s1.name, "Mahedi Hasan");
    };

    struct student s2;
    {
        s2.roll = 45423;
        s2.cgpa = 3.45;
        strcpy(s2.name, "Michel Jackson");
    };

    struct student s3;
    {
        s3.roll = 52532;
        s3.cgpa = 3.65;
        strcpy(s3.name, "Daniel Jackson");
    };
    printf("student name = %s \n", s1.name);
    printf("student roll no  = %d\n", s1.roll);
    printf("student cgpa = %f \n", s1.cgpa);
    printf("student name = %s \n", s2.name);
    printf("student roll no  = %d\n", s2.roll);
    printf("student cgpa = %f \n", s2.cgpa);
    printf("student name = %s \n", s3.name);
    printf("student roll no  = %d\n", s3.roll);
    printf("student cgpa = %f \n", s3.cgpa);
}

#include <stdio.h>

// user defined
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {355 , 4.5,"Mahedi Hasan"};
    printf("student roll = %d \n", s1.roll);
    printf("student roll = %f \n", s1.cgpa);
    printf("student roll = %s \n", s1.name);

    struct student s2 = {665 , 4.5,"Zunayed Hasan"};
    printf("student roll = %d \n", s2.roll);
    printf("student roll = %f \n", s2.cgpa);
    printf("student roll = %s \n", s2.name);

    struct student s3 = {45 , 4.5,"Ashique Hasan"};
    printf("student roll = %d \n", s3.roll);
    printf("student roll = %f \n", s3.cgpa);
    printf("student roll = %s \n", s3.name);


}
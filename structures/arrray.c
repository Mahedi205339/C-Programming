#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student ece[100];
    {
        ece[0].roll = 34;
        ece[0].cgpa = 3.45;
        strcpy(ece[0].name, "Oggy");
        printf("name = %s \n",ece[0].name);
        printf("roll = %d \n",ece[0].roll);
        printf("cgpa = %f \n",ece[0].cgpa);

        ece[1].roll = 364;
        ece[1].cgpa = 3.55;
        strcpy(ece[1].name, "Mahedi");
        printf("name = %s \n",ece[1].name);
        printf("roll = %d \n",ece[1].roll);
        printf("cgpa = %f \n",ece[1].cgpa);

        ece[2].roll = 345;
        ece[2].cgpa = 3.45;
        strcpy(ece[0].name, "Michel");
        printf("name = %s \n",ece[2].name);
        printf("roll = %d \n",ece[2].roll);
        printf("cgpa = %f \n",ece[2].cgpa);

        ece[3].roll = 344;
        ece[3].cgpa = 3.45;
        strcpy(ece[3].name, "jack");
        printf("name = %s \n",ece[3].name);
        printf("roll = %d \n",ece[3].roll);
        printf("cgpa = %f \n",ece[3].cgpa);

        
    };
}

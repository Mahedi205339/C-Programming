#include <stdio.h>

int calcPercentage(int science, int math, int english);
int main()
{
    int sc = 69;
    int math = 79;
    int en = 92;
    printf("percentage is: %d", calcPercentage(sc, math, en));
}
int calcPercentage(int science, int math, int english)
{
    return ((science + math + english) / 3) ;
}
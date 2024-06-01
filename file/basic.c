#include <stdio.h>

int main()
{

    FILE *fptr;

    // fopen("filename" , mode) --> mode shows the what is going to do with this  file (read or write etc)
    fptr = fopen("text.txt", "w"); // "r" ---> read

    if (fptr == NULL)
    {
        printf("file doesn't exist \n");
    }
    else
    {
        fclose(fptr); // file --->> close
    }

    return 0;
}
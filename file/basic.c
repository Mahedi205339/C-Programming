#include <stdio.h>

int main()
{

    FILE *fptr;

    // fopen("filename" , mode) --> mode shows the what is going to do with this  file (read or write etc)
    fptr = fopen("test.txt", "w"); // "r" ---> read

    // if (fptr == NULL)
    // {
    //     printf("file doesn't exist \n");
    // }
    // else
    // {
    //     fclose(fptr); // file --->> close
    // }

    // int ch;
    // fscanf(fptr , "%d" ,&ch);
    // printf("character = %d \n" , ch);

    // fscanf(fptr , "%d" ,&ch);
    // printf("character = %d \n" , ch);

    // fscanf(fptr , "%d" ,&ch);
    // printf("character = %d \n" , ch);
    // fscanf(fptr , "%d" ,&ch);
    // printf("character = %d \n" , ch);

    // fscanf(fptr , "%d" ,&ch);
    // printf("character = %d \n" , ch);
    // fscanf(fptr , "%d" ,&ch);
    // printf("character = %d \n" , ch);

    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'N');
    // fprintf(fptr, "%c", 'G');
    // fprintf(fptr, "%c", 'O');


    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));
    // printf("%c \n",fgetc(fptr));.

    fputc('A', fptr);
    fputc('P', fptr);
    fputc('P', fptr);
    fputc('L', fptr);
    fputc('E', fptr);


  

    return 0;
}
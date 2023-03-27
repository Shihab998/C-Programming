#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char name[30];
    file=fopen("text.txt","w");
    if(file==NULL)
    {
        printf("File does not exit");

    }
    else
    {
        printf("File is open\n");
        printf("Enter your full name: ");
        gets(name);
        fputs(name,file);
        printf("The File is written suessfully");



        fclose(file);
    }
    getch();
}

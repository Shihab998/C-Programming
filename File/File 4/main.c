#include <stdio.h>


int main()
{
    FILE * file;
    char name[30];
    int age;
    file=fopen("text.txt ", "a");
    if(file==NULL)
    {
        printf("File dose not exets");
    }
    else
    {
        printf("File is open \n");

        printf("Enter your name:");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);
        fprintf(file,"Name %s  Age %d\n",name,age);

        printf("The file is Written suessfully\n");
        fclose(file);
    }

    getch();
}

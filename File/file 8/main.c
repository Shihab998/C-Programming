#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char name[30];
    int age,number,num,i;

    file=fopen("text.txt ", "a");
    if(file==NULL)
    {
        printf("File dose not exets");
    }
    else
    {
        printf("File is open \n");
        printf("Enter your number: ");
        scanf("%d",&num);

        for(i=1; i<=num; i++)
        {
            printf("Enter student name :");
            scanf("%s",&name);
            printf("Enter student age :");
            scanf("%d",&age);
            printf("Enter student number :");
            scanf("%d",&number);
            fprintf(file,"\n %s\t\t%d\t%d \n",name,age,number);

        }
        fclose(file);
    }

    getch();
}

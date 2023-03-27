#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE * file;
    char ch;
    file=fopen("text.txt","r");
    if(file==NULL)
    {
        printf("File does not exit");

    }
    else
    {
        printf("File is open\n");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
    getch();
}

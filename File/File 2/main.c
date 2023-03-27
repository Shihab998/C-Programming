#include <stdio.h>
#include <stdlib.h>

int main()
{
     FILE * file;
     char num[30]={"pollob khan"};
     int i;
     int length=strlen(num);
    file=fopen("text.txt" ,"w");

    if(file==NULL)
    {
        printf("File does not exits");
    }
    else
    {
        printf("File is exits\n ");
        for(i=0;i<length;i++)
        {
            fputc(num[i],file);

        }
        printf("file  written suessfully:");
        fclose(file);
    }
    getch ();

}

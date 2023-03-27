#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    file=fopen("text.txt" ,"w");
    if(file==NULL)
    {
        printf("File does not exits");
    }
    else
    {
        printf("File is exits");
        fcolse(file);
    }
    getch ();

}

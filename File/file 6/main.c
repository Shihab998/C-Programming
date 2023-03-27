#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char name[30];

    file=fopen("text.txt ", "r");
    if(file==NULL)
    {
        printf("File dose not exets");
    }
    else
    {
        printf("File is open \n");
        while (!feof(file))
        {

        fgets(name,29,file);
        printf("%s \n",name);
        }



        printf("The file is read suessfully\n");
        fclose(file);
    }

    getch();
}

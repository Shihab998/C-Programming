#include <stdio.h>
#include <stdlib.h>

int main()
{
      FILE * file;
    char Fname[30];
     char Lname[30];

    file=fopen("text.txt ", "r");
    if(file==NULL)
    {
        printf("File dose not exets");
    }
    else
    {

        printf("The file is open: \n");
        fscanf(file,"%s %s ",&Fname,Lname);
        printf("%s %s \n",Fname,Lname);



        printf("The file is read suessfully\n");
        fclose(file);
    }

    getch();
}

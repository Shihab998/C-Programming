#include <stdio.h>
#include <stdlib.h>
void display(char x[])
{
    int i=0;
    while(x[i]!='\0')
    {
          printf("%c\n",x[i]);
        i++;

    }

}
int main()
{
   char str[100]="pollob";
   display(str);
    return 0;
}

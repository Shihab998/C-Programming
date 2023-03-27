#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[]={"pollob"};
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }

    return 0;
}

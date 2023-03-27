#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;

file:
    printf("%d\n",i);
    i++;


    if(i<=100)

        goto file;
    return 0;
}

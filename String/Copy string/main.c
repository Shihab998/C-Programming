#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[]={"shihab shahria"};
    char target[20];

    strcpy(target,source);
    printf("source string=%s\n",source);
     printf("target string=%s",target);

    return 0;
}

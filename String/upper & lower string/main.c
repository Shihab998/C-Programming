#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str1[30]={"Pollob khan"};

    strupr(str1);
    printf("Upper latter=%s\n",str1);


    strlwr(str1);
    printf("Lower latter=%s\n",str1);
    return 0;
}

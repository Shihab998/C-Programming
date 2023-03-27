#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=15;i++)
    {
        if(i%4==0)
            continue;
        printf("%d\n",i);

        if(i==14)
            break;
    }

    return 0;
}

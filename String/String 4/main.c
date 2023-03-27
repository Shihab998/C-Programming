#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Without strlen
       char s1[]={"pollob khan"};

    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("%d",len);
    return 0;
}

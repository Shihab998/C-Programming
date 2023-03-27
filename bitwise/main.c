#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a=10;
    int b=12;
    int c;

     c=a&b;
     printf("a&b=%d\n",c);
     c=a|b;
     printf("a|b=%d\n",c);
     c=a^b;
     printf("a^b=%d\n",c);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,fact=1,n;
    printf("enter your number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }printf("%d\n",fact);
    return 0;
}

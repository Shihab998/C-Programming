#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],sum=0,i;
    printf("Enter your 10 number: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];


    }  printf("The sumation is: %d\n",sum);
        printf("The avarage is: %.2f ",(float)sum/10);

    return 0;
}

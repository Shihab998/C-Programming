#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],sum=0,n,i;
    printf("Enter your number:  ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("The sumation is: %d \n",sum);
    printf("The average is: %.2lf \n",(float)sum/n);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,temp,rem;
    printf("Enter your positive number: ");
    scanf("%d",&n);
    temp=n;
    sum=0;


    while(temp !=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("sametion: %d\n",sum);
    return 0;
}

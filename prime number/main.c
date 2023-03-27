#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,count=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
            printf("not prime number");
            break;
        }
        if(count==0)
            printf("prime number");
        break;
    }
    return 0;
}

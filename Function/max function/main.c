#include <stdio.h>
#include <stdlib.h>
int maximum(int x[])
{
    int i;
int  max=x[0];
    for(i=1;i<5;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }

    }

return max;
}
int main()
{
    int num[100],n,i;
  printf("Enter your numbers: ");
    scanf("%d",&n);
    printf("Enter your array element: ");
    for(i=0;i<=n;i++)
    {

        scanf("%d",&num[i]);
    }
    int maximumvalue=maximum(num);
   printf("the maximum value is: %d",maximumvalue);
}

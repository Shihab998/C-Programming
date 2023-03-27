#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1[30],n,i,a2[30];
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }

    printf("Array1: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\nArray 2: ");
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
        printf("%d ",a2[i]);
    }
    return 0;
}

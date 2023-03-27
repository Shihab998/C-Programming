#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,row,col;
    printf("Enter your number: ");
    scanf("%d",&n);


    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");

        }
        for(col=1; col<=row*2-1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

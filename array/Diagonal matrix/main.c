#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10][10],i,j,sum=0;
    printf("Enter your 3 element: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A [%d] [%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal elements:");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
                printf("%d ",A[i][j]);
            sum=sum+A[i][j];

        }

    }
    printf("\nsum of diagonal= %d",sum);


    return 0;
}

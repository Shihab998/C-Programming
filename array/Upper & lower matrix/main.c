#include <stdio.h>
#include <stdlib.h>

int main()
{
      int A[10][10],i,j,Uppersum=0,Lowersum=0;
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
    printf("A=\n");
      for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    //sum of upper & lower element
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
                {
                Uppersum=Uppersum+A[i][j];
            }
            if(i>j)
            {
                Lowersum=Lowersum+A[i][j];
                }
        }
    }
    printf("\nSum of upper triangel element: %d\n",Uppersum);
      printf("\nSum of lower triangel element: %d",Lowersum);
    return 0;
}

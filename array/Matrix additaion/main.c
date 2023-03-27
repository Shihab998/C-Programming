#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,numberOfRows,numberOfCols;

    printf("Enter your Rows: ");
    scanf("%d",&numberOfRows);
     printf("Enter your cols: ");
    scanf("%d",&numberOfCols);
    printf("Enter your A element:\n");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("A [%d] [%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    printf("\n");
     printf("Enter your B element:\n");

    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("B [%d] [%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("A=");
      for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
           printf("%d",A[i][j]);
        }

        printf("\n");
    }
     printf("\nB=");
      for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
           printf("%d",B[i][j]);
        }
        printf("\n");
    }

      for(i=0;i<numberOfRows;i++)
    {

        for(j=0;j<numberOfCols;j++)
        {
          C[i][j]=A[i][j] + B[i][j];
        }
        printf("\n");
    }
    printf("\nC=");
      for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
           printf("%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

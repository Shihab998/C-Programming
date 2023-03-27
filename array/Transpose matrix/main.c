#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10][10],tranport[10][10],i,j,col,row;
    printf("Enter number of row & col element: ");
    scanf("%d %d",&row,&col);
    printf("Enter your Element: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A [%d] [%d] =",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("A=\n");
    for(i=0; i<row; i++)
    {

        for( j=0; j<col; j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }  for(i=0; i<row; i++)
    {

        for( j=0; j<col; j++)
        {

            tranport[j][i]=A[i][j];
        }
        printf("\n");
    }
       printf("tranport=\n");
    for(i=0; i<col; i++)
    {

        for( j=0; j<row; j++)
        {

            printf("%d ",tranport[i][j]);
        }
        printf("\n");
    }



    return 0;
}

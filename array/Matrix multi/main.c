#include <stdio.h>
#include <stdlib.h>

int main()
{
 int first[10][10],second[10][10],result[10][10];
 int r1,c1,r2,c2,i,j;
 printf("Enter your 1st row and column: ");
 scanf("%d %d",&r1,&c1);
 printf("Enter your 2nd row and column: ");
 scanf("%d %d",&r2,&c2);
 while(c1!= r2)
 {
     printf("Error!");
     printf("Enter your 1st row and column: ");
 scanf("%d %d",&r1,&c1);
 printf("Enter your 2nd row and column: ");
 scanf("%d %d",&r2,&c2);

 }
   printf("Enter your 1st element:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("1st [%d] [%d]= ",r1,c1);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }
       printf("First=");
      for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
        {
           printf(" %d ",first[i][j]);
        }

        printf("\n");
        printf("\t");
    }
    printf("Enter your 2nd element:\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("2nd [%d] [%d]= ",r2,c2);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }
    printf("second=");
      for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
        {
           printf(" %d ",second[i][j]);
        }

        printf("\n");
        printf("\t");
    }


    return 0;
}

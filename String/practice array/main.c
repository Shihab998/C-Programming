#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3] [4];
    int i,j;
    printf("Enter your element: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++){
            printf("A [%d] [%d] =",i,j);
             scanf("%d",&a[i][j]);}
             printf("\n");
    }
    printf("A=");
    for(i=0;i<3;i++)

    {
 printf("\t");
        for(j=0;j<4;j++)
        {

        printf("%d ",a[i][j]);
        }
        printf("\n");

    }


    return 0;
}

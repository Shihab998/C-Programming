#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n,row,col;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)

      {




        for(col=1; col<=row; col++)
        {
            printf("%d ",row*col);
        }
        printf("\n");
    }

    return 0;
}

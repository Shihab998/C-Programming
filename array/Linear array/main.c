#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[]={12,13,1,15,16,17,18},i;
    int value;
    int pos=-1;

        printf("Enter your value: ");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
        if(pos==-1)
        {
            printf("not a position");
        }
        else
{


             printf("The position is: %d\n",pos);
}



    return 0;
}

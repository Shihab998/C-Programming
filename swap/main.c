#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,temp;
    printf("1st number:");
    scanf("%d",&num1);
    printf("2nd number:");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("the swap 1st number is:%d\n",num1);
    printf("the swap 2nd number is:%d\n",num2);


    return 0;
}

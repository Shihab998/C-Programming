#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;

    printf("Enter your 3 number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
        printf("The large number: %d\n",num1);
    else if(num2>num1 && num2>num3)
        printf("The large number: %d\n",num2);
     else if(num3>num1 && num3>num2)
            printf("The large number: %d\n",num3);
     else
        printf("The number are equal");


    return 0;
}

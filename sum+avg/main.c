#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("Enter your 3 number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    avg=(float)sum/3;
    printf("The sum is:%d\n",sum);

    printf("The avg is:%.2f",avg);
    return 0;
}

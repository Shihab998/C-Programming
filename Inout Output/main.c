#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float num2;
    double num3;
    printf("Enter your number: ");
    scanf("%d %f %lf",&num,&num2,&num3);
    printf("the number are:%d %f %lf\n",num,num2,num3);
    return 0;
}

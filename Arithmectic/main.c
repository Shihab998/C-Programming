#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum;
    float avg;

    printf("Enter your number: ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    avg=(float)sum/2; //type casting

    printf("This avg is: %.2f\n",avg);

    return 0;
}

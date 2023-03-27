#include <stdio.h>
#include <stdlib.h>

int main()
{ int num1,num2;
printf("Enter your 1st number: ");
scanf("%d",&num1);
printf("Enter your 2nd number: ");
scanf("%d",&num2);
num1=num1-num2;
num2=num1+num2;
num1=num2-num1;
printf("1st swap number is:%d\n",num1);
printf("2nd swap number is:%d\n",num2);

    return 0;
}

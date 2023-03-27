#include <stdio.h>
#include <stdlib.h>
   int sum(int a, int b)
{
    return  a+b;

}
  int sub(int a, int b)
{
    return  a-b;

}
int main()
{
    int num1,num2;

    printf("Enter your two number: ");
    scanf("%d %d",&num1,&num2);

    int result=sum(num1,num2);
    int result2=sub(num1,num2);
    printf("The sum is=%d\n",result);
        printf("The sub is=%d",result2);


}


#include <stdio.h>
#include <stdlib.h>
int mul(int a,int b)
{
    return a*b;
}
int square(int a)
{
    return a*a;
}
int main()
{
    int num1,num2;

    printf("Enter your two number: ");
    scanf("%d %d",&num1,&num2);

    int result=mul(num1,num2);
    int sqe=square(num1);
    printf("The multiplication is=%d\n",result);
        printf("The square is=%d",sqe);
}

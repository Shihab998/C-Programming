#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,num1,num2,rem,lcm,gcd;

    printf("Enter your 2 number: ");
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;


    while (n2!=0)
    {
        rem=n1 % n2;
        n1=n2;
        n2=rem;


    }
    gcd=n1;
    printf("Gcd=%d\n",gcd);

    lcm=num1*num2/gcd;
    printf("Lcm=%d\n",lcm);


    return 0;
}

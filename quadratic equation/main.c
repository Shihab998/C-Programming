#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,x1,x2;
    printf("Enter your number: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    printf("the x1 eqation is:%lf\n",x1);
    x2=(-b-d)/(2*a);
    printf("the x2 eqation is:%lf\n",x2);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void calpower(double bes,double exp)
{
    double result=1,i;
    for(i=1;i<=exp;i++)
        {
            result=result*bes;
        }
    printf("the result is: %.1lf",result);
}
int main()
{


    double bes,exp;
   printf("Enter your base: ");
   scanf("%lf",&bes);

    printf("Enter your Exponent: ");
   scanf("%lf",&exp);

   calpower(bes,exp);

}

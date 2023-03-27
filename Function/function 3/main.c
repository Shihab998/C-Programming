#include <stdio.h>
#include <stdlib.h>

int main()
{
   double bes,exp,result;
   printf("Enter your base: ");
   scanf("%lf",&bes);

    printf("Enter your Exponent: ");
   scanf("%lf",&exp);
   //using libary function
   result=pow(bes,exp);
   printf("the result is: %lf",result);
}

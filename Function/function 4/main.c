#include <stdio.h>
#include <stdlib.h>

int main()
{
  double bes,exp,result=1,i;
   printf("Enter your base: ");
   scanf("%lf",&bes);

    printf("Enter your Exponent: ");
   scanf("%lf",&exp);
   //using not libary function
  for(i=1;i<=exp;i++)
  {
      result=result*bes;
  }
   printf("the result is: %.2lf",result);
    return 0;
}

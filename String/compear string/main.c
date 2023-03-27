#include <stdio.h>
#include <stdlib.h>

int main()
{
     char str1[]={"Shihab shahria"};
    char str2[]={"Shihab shahria" };

  int d= strcmp(str1,str2);

      if(d==0)
      {
          printf("The string are equal");
      }
      else
      {
          printf("The string are not equal");
      }





    return 0;
}

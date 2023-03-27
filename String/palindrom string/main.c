#include <stdio.h>
#include <stdlib.h>

int main()
{  char str1[30]={"madam"};
   char str2[30];
   int i,len=0,j;
   while(str1[i]!='\0')
   {
       i++;
       len++;
   }
   for(j=0,i=len-1; i>=0; i--,j++)
   {
       str2[j]=str1[i];
   }
   printf("str1=%s\n",str1);
   printf("Reverse=%s\n",str2);


    int d= strcmp(str1,str2);

      if(d==0)
      {
          printf("The string is palindrome ");
      }
      else
      {
          printf("The string is not palindrome");
      }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //without libary function
   char str1[30]={"pollob khan"};
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
    return 0;
}

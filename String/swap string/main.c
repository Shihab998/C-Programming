#include <stdio.h>
#include <stdlib.h>

int main()
{
    char    str1[30]= {"Bangladesh"};
    char  str2[30]= {"my country"};
    char   temp[30];
    printf("str1= %s\n",str1);
    printf("str2= %s\n",str2);

    strcpy (temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("\n\nstr1= %s\n",str1);
    printf("str2= %s\n",str2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],ch;
    int i,small,capital,digit;
    printf("Enter your string:");
    gets(str);
    i=capital=small=digit=0;
    while((ch=str[i])!='\0')
    {
        if(ch>=65 && ch<=90)
            capital++;
        else if(ch>=97 && ch<=122)
            small++;
        else if(ch>=48 && ch<=57)
            digit++;
        i++;


    }
    printf("Capital latter=%d\n",capital);
    printf("small latter=%d\n",small);
    printf("Digit=%d\n",digit);



    return 0;
}

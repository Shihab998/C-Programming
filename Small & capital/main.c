#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter your latter: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Capital latter");

    else if(ch>='a' && ch<='z')
        printf("Small latter");
    else
        printf("Not a latter");
    return 0;
}

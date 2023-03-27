#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter your charcter: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("vowel");
    else
        printf("consonant");

    return 0;
}

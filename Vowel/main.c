#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter your Latter: ");
    scanf("%c",&ch);
    if(ch=='A'|| ch=='a'|| ch=='E'|| ch=='e'|| ch=='I'|| ch=='i'|| ch=='O'|| ch=='o'|| ch=='U'|| ch=='u')
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}

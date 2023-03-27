#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter your Latter: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'o':
    case 'i':
    case 'u':
        printf("vowel\n");

        break;
    default:
        printf("consonant");
    }


    return 0;
}

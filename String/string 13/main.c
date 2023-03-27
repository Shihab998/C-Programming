#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],ch;
    int i,vowel,consonant,word,number,other;
    printf("Enter your string: ");
    gets(str);
    i=vowel=consonant=word=number=other=0;
    while((ch=str[i])!='\0')
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vowel++;
        else if((ch>='a' &&ch<='z') || (ch>='A' &&ch<='Z') )
            consonant++;
        else if(ch>='0' && ch<='9')
            number++;
        else if(ch==' ')
            word++;
        else
            other++;
            i++;
    }
    word++;
    printf("Vowel=%d\n",vowel);
        printf("consonant=%d\n",consonant);
            printf("word=%d\n",word);
                printf("number=%d\n",number);
                    printf("other=%d\n",other);




    return 0;
}

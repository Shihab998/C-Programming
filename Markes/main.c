#include <stdio.h>
#include <stdlib.h>

int main()
{
    float markes;
    printf("Enter your markes: ");
    scanf("%f",&markes);

    if (markes>=80)
        printf("A+");

    else if (markes>=70)
        printf("A");

    else  if (markes>=60)
        printf("A-");

    else if (markes>=50)
        printf("B");

    else if (markes>=40)
        printf("C");

    else if (markes>=33)
        printf("D");
    else
        printf("Fail");



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
      int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    if (num%2==0)
        printf("Even ");
    else
        printf("Odd");

    return 0;
}

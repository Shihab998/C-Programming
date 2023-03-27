#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lower;
    printf("Enter your lower number:");
    scanf("%c",&lower); //a=97
    printf("Enter your upper number:%c",lower-32);  //lower-32=upper

    return 0;
}

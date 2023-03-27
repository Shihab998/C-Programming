#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("fahrenheit: ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("Centigrade:%f\n",C);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;
    printf("Enter c number:");
    scanf("%f",&C);
    F=(C*1.8)+32;
    printf("Fahrenheit:%.2f\n",F);
    return 0;
}

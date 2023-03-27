#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hight,base,area;
    printf("Enter hight number:");
    scanf("%f",&hight);
    printf("Enter base number:");
    scanf("%f",&base);
    area=0.5*hight*base;
    printf("The area is:%.2f\n",area);
    return 0;
}

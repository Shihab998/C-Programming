#include <stdio.h>
#include <math.h>

int main()
{
    double area,radius;
    printf("Enter radius valu: ");
    scanf("%lf",&radius);
    area=M_PI*radius*radius;  //area=3.1416*radius*radius
    printf("The area is:%lf\n",area);
    return 0;
}

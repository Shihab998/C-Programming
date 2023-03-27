#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1,num2;
    char op;
    printf("Enter an opreator(+,-,*,/): ");
    scanf("%c",&op);

     printf("Enter your 2 number: ");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+':
        printf("%lf + %lf= %lf\n",num1,num2,num1+num2);
        break;
        case '-':
        printf("%lf - %lf= %lf\n",num1,num2,num1-num2);
        break;
        case '*':
        printf("%lf * %lf= %lf\n",num1,num2,num1*num2);
        break;
        case '/':
        printf("%lf / %lf= %lf\n",num1,num2,num1/num2);
        break;
        default:
            printf("Its not oparetor");
    }

    return 0;
}

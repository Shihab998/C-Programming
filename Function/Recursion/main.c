#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    if(n==1){
         return 1;}
    else
       return n*fact(n-1);
}
int main()
{
  int result=fact(5);
  printf("Factorial: %d",result);

}

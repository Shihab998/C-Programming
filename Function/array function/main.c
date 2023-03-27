#include <stdio.h>
#include <stdlib.h>
int display(int x[])
{
    int i;
    for(i=0;i<5;i++)

        printf("%d ",x[i]);

}
int main()
{
   int num[]={10,11,12,13,14};
   display(num);
}

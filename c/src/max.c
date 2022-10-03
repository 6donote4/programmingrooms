#include <stdio.h>
#include "../headers/myfunc.c"
void main()
{
    int a,b;
    printf("\nPlease two numbers:");
    scanf("%d,%d",&a,&b);
    printf("The maximum number is %d\n",max(a,b));
}

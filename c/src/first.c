#include<stdio.h>
#include "../headers/myfunc.c"
void main()
{
    int a,b;
    printf("\nEnter two Number:");
    scanf("%d,%d",&a,&b);
    printf("Minimum:%d\n",min(a,b));
}

#include<stdio.h>
int m;
int min(int x,int y);
void main()
{
    int a,b;
    printf("\nEnter two Number:");
    scanf("%d,%d",&a,&b);
    m=min(a,b);
    printf("Minimum:%d\n",m);
}
int min(int x,int y)
{
    int t=0;
    if(x<y) t=x;
    else t=y;
    return t;
}

#include <stdio.h>
int max();
void main()
{
    int a,b;
    printf("\nPlease two numbers:");
    scanf("%d,%d",&a,&b);
    printf("The maxmium number is %d\n",max(a,b));
}

int max(int x,int y)
{
    int t;
    if(x>y) t=x;
    else t=y;
    return(t);
}

#include "myfunc.h"
int min(int x,int y)
{
    int t=0;
    if(x<y) t=x;
    else t=y;
    return t;
}

int max(int x,int y)
{
    int t=0;
    if(x<y) t=y;
    else t=x;
    return t;
}

#include <iostream>
#include "ourfunc.hpp"
void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times. "<< endl;
}

void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}

int min(int x,int y)
{
    int t;
    if (x<y) t=x;
    else t=y;
    return t;
}

int max(int x,int y)
{
    int t;
    if (x<y) t=y;
    else t=x;
    return t;
}

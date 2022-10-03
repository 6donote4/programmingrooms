#include <iostream>
#include "../headers/ourfunc.cpp"

int main()
{
    using namespace std;
    int m,n;
    cout << "Please input 2 numbers:" << endl;
    cin >> m;
    cin >> n;
    cout << "The minimun number is " << min(m,n) << " ." << endl;
    return 0;
}

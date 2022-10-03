#include <cstring>
#include "../headers/stock.cpp"


int main()
{
    using std::cout;
    using std::ios_base;
    Stock stock2;
    Stock stock1("NanoSmart",20,12.50);
    stock2.acquire("Smart",30,13.50);
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    stock1.show();
    stock1.buy(15,18.25);
    stock1.show();
    stock1.sell(400,20.00);
    stock1.show();
    stock2.show();
    stock2.buy(505,18.25);
    stock2.show();
    stock2.sell(400,20.00);
    stock2.show();
    return 0;
}

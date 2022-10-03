#ifndef OURFUNC_HPP_INCLUDED
#define OURFUNC_HPP_INCLUDED
class Stock
{
    private:
        char company[30];//私有成员数据
        int shares;
        double share_val;
        double total_val;
        void set_tot()
        {total_val = share_val * shares;}//私有成员函数的声明与定义
    public:
        void acquire(const char * co,int n,double pr);//公共接口函数
        void buy(int num,double price);
        void sell(int num,double price);
        void update(double price);
        void show();
        Stock();//默认构造函数，无参
        Stock(const char * co,int n = 0,double pr =0.0);//带参非默认构造函数
};//类声明
#endif

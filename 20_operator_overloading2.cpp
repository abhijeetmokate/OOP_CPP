#include<iostream>
using namespace std;


class integer
{
    int data;
    public:

    void set_data(int);
    void show_data();

    integer operator++() //preincrement
    {
        integer temp;
        temp.data = ++data;
        return temp;
    }

    integer operator++(int) //post increment // int argument is pass just to differentiate from preincrement
    {
        integer temp;
        temp.data = data++;
        return temp;
    }
};

void integer::set_data(int a)
{
    data = a;
}

void integer::show_data()
{
    cout<<data<<endl;
}

int main()
{
    integer i,i1;
    i.set_data(30);
    i.show_data();
    i1= i++;
    i.show_data();
    i1.show_data();
    return 0;
}
/*
 * operator overloading as a friend funtion:
 * 
 * 
 */
 
#include<iostream>
using namespace std;

class complex
{
    int real,img;
    public:
    
    void setData(int,int);
    void showData();

    friend complex operator+(complex,complex);
    friend complex operator-(complex);
};

void complex::setData(int a,int b)
{
    real = a;
    img = b;
}

void complex::showData()
{
    cout<<real<<"+"<<img<<"i";
}

complex operator+(complex x,complex y)
{
    complex temp;
    temp.real = x.real+y.real;
    temp.img = x.img+y.img;
    return temp;
}

complex operator-(complex x)
{
    complex temp;
    temp.real = -x.real;
    temp.img = -x.img;
    return temp;
}

int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(4,3);
    c3 = c1+c2; //both c1 and c2 will be pass as the argument
    c3 = -c3;
    
    c3.showData();
    return 1;
}

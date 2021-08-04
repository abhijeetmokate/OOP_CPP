#include<iostream>
using namespace std;

int main()
{
    void swap(int &,int &);
    int a,b;
    a=3;
    b=8;
    cout<<a<<"  "<<b<<endl;
    swap(a,b); 
    cout<<a<<"  "<<b;
}

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
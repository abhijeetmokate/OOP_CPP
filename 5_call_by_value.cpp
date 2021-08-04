#include<iostream>
using namespace std;



int main()
{
    void add(int ,int);
    add(4,5); // actual argument
}

void add(int a,int b) //formal argument
{

    cout<<a+b;
}
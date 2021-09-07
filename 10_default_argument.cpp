#include<iostream>
using namespace std;


void add(int,int,int = 0); // this is the declaration of the function


int main()
{
    cout<<"main\n";
    add(5,6,8);
}

void add(int a,int b,int c)
{
    cout<<a+b+c;
}

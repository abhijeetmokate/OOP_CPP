/*
Static local variable:
1.they are default initialized to zero.
2.their lifetime is throughout the program


*/


#include<iostream>
using namespace std;

void fun();

void fun()
{
    static int x=0; //x will only create once during the program execution and destroy when progrm ends.
    int y=0; // y will create each time when the fun() is get called and destroy after the exectuion of fun().
    x=x+10;
    y=y+10;
    cout<<x<<" "<<y;
}

int main()
{
    static int a; //by default a=0;
    
    for(int i=0;i<5;i++)
    {
        fun();
        cout<<endl;
    }

    return 0;
}
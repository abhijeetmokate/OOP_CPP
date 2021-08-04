/*
Static local variable:
1.they are default initialized to zero.
2.their lifetime is throughout the program

Static Member Variable:
1.Declared inside the class body.
2.also known as the class member variable.
3.they must be defined outside the class.
4.static member variable does not belong to any object, but to the whole class.
5.there will be only one copy of static member variable for the whole class.
6.any object can use the same copy of class variable.
7.they can also be found with class name.
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
    int b;  // by default garbage value
    cout<<a<<endl;
    
    for(int i=0;i<5;i++)
    {
        fun();
        cout<<endl;
    }

    return 0;
}
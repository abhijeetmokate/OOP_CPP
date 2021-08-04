/*
class is used to describe properties and behaviour of an object.

Type Of inheritance:
1.single inheritance
2.multilevel inheritance
3.multiple inheritance
4.hierarchical inheritance
5.hybrid inheritance


# 'is a' relation:
    1.banana is a fruit -> in this case the fruit can be base class and 
                         banana can be child of fruit.
    
    2.'is a relation is always implemented as public inheritance'.So that 
        we can use public services of parent through child's object.


*/

#include<iostream>
using namespace std;


class A{
    public:
    void fun1()
    {
        cout<<"class A - fun1";
    }
};

class B:public A{
    public:
    void fun2(){
        cout<<"class B - fun2";
    }
};

int main()
{
    B obj;
    obj.fun2();
    return 0;
}

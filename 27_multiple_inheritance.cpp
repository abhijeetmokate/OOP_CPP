/*
Multiple Inheritance:
child class is inherited from two or more parent classes.
*/

#include<iostream>
using namespace std;

class A{
    public:
    void funA()
    {
        cout<<"A - funA\n";
    }
};

class B{
    public:
    void funB()
    {
        cout<<"B - funB\n";
    }
};

class C:public A,public B{
    public:
    void funC()
    {
        cout<<"C - funC\n";
    }
};


int main()
{
    C obj;
    obj.funA();
    obj.funB();
    obj.funC();
}
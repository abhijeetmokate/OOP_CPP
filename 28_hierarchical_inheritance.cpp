/*
Hierarchical Inheritance:
one parent class and multiple chiled classes
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

class B:public A{
    public:
    void funB()
    {
        cout<<"B - funB\n";
    }
};

class C:public A{
    public:
    void funC()
    {
        cout<<"C - funC\n";
    }
};

int main()
{
    B b;
    C c;
    b.funA();
    b.funB();
    cout<<endl;
    c.funA();
    c.funC();
    return 0;
}

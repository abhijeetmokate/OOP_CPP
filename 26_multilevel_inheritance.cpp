/*
MultiLevel inheritance:
1. parent class of B is A 
2. parent class of C is B
3.parent class of D is C & so on...

//transitive relation
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

class C:public B{
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
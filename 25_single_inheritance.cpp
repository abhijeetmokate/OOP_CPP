

//single inheritance - only one parent and one class

#include<iostream>
using namespace std;

class parent{
    int a,b;
    public:
    void fun1()
    {
        cout<<"parent - fun1\n";
    }
};

class base:public parent{
    int c;
    public:
    void fun2()
    {
        cout<<"base - fun2\n";
    }
};

int main()
{
    base obj;
    obj.fun1();
    obj.fun2();
    return 0;
}
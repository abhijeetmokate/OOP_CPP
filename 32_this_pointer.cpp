/*
this pointer:
1.'this' is a local pointer in every instance member function containing 
   address of the caller object.
2. this pointer can not modify.
3. it is used to refer caller object in member function.

*/

#include<iostream>
using namespace std;

class A{

    int a,b;
    public:
    void printA()
    {
        cout<<this<<endl;
    }

    void setVal(int a, int b)
    {
        this->a= a; //to avoid name conflict
        this->b= b;
    }

    void showVal()
    {
        cout<<"\n"<<a<<"  "<<b<<endl;
    }

};

int main()
{
    A obj;
    obj.printA();
    cout<<&obj;

    obj.setVal(2,3);
    obj.showVal();
    return 0;
}
/*

*/

#include<iostream>
using namespace std;

class A{
    protected:
    int val;
    public:
    A()
    { }

    A(int a){
        val = a;
    }
    ~A(){
        cout<<"destructor A\n";
    }
};

class B:public A{
    int x;
    public:
    
    B()
    { }

    B(int a, int b):A(b){
        x=a;
    }

    void printData(){
        cout<<val<<"  "<<x<<endl;
    }

    ~B(){
        cout<<"destructor B\n";
    }
};

int main()
{
    B obj(3,4);
    obj.printData();
    return 0;
}
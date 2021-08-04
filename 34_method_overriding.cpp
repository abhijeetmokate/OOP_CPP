/*
Method Overloading:
1.

Method Overriding:
1.the method with same prototype is present in both parent and 
  child class known as method overriding.
2.If we want to modify already existing method in our child class
  then in that scenario we can use method overriding.
3.If we use the child class object to call method then child class version
  of method will get called.
4.And for parent class object parent method version will get called.

Method Hiding:
1.If the methods with the same name but with different prototype are present 
  in both the parent and child are called method hiding.
2.During compilation of programe (during early binding) compiler checks the
  type of caller object and checks if the method is present in that class (it only
  checks the name of the method in class and not the arguments) and if present then
  it binds it with call and if it is not present then it checks in the parent class if any.
3.In parent class even the signature of the method is different than child class but still 
  because of the early binding it will be hidden and we cannot access it.  

*/
#include<iostream>
using namespace std;


class car{
    public:
    void shiftGear()
    {
        cout<<"\ncar:shiftGear\n";
    }

    void fun(int a)
    {
        cout<<"\nfun(int)\n";
    }
};

class sportsCar:public car{
    public:
    void shiftGear() // method overriding 
    {
        cout<<"\nsportsCar:shiftGear\n";
    }

    void fun()
    {
        cout<<"\nfun()\n";
    }
};

int main()
{
    sportsCar obj;
    obj.shiftGear(); // overrided (modified) method will be called
            //car::fun(int) will be hidden
    obj.fun(3); // compiler binds the fun() from child class - error 
    obj.fun(); // fun() from child class - no error
    return 0;
}
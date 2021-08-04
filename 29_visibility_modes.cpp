/*

Availability:
When we create the object all member variable get memory and
all are available to object.

Accessibility:
Only member with public access specifier can be access by object.


Visibility Modes:

Private:
1.we can't access private member with object.
2.Derived class can't access it.
3.only class member can access it.

Protected:
1.Not accessible through object.
2.Derived class can access it.

Public:
1.can access through object.
2.Derived class can access it.


Access Specifier during inheritance:

a)Public:
        # class B:public A{};
1.Protected members of class A are inherited as protected member of class B.
2.Public members of class A are inherited as public member of class B.

b)Protected:
    #.class B:protected A{};
1.Public members of class A are inherited as protected in class B.
2.Protected members of class A are inherited as protected in class B.

c)Private:
    #.class B:private A{};
1.Public members of class A inherited as private in class B.
2.Protected members of class A inherited as private in class B.
*/
#include<iostream>
using namespace std;

class A
{
    public:
    int a; //accessible through object 
    protected:
    int b; //accessible in this class and child class
    private:
    int c; //accesible in this class only
    public:
    A()
    {
        a=1;
        b=2;
        c=3;
    }
};

class B:private A
{
    //c is not accessible in this class.
    //in this class 'a' and 'b' is private and are only accessible in this class.
    public:
    void showData()
    {
        cout<<a+b;
    }
};


class C:protected A
{   //c is not accessible
    //int this class 'a' and 'b' are protected and child class of this class can access it.
    //
    public:
    void showData()
    {
        cout<<a<<" "<<b;
    }
};

class D:public A
{
    //c is not accessible
    //in this class 'a' is public and 'b' is protected
    public:
    void showData()
    {
        cout<<a+b;
    }
};


int main()
{
    A obj1; // base class
    B obj2; // private
    C obj3; // protected
    D obj4; // public

     

    cout<<obj2.;

}
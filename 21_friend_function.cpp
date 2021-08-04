/*
Friend function:
1.friend function is not a member function of a class to which it is a friend.
2.friend function is declared in the class with friend keyword.
3.it must be defined outside the class to which it is friend.
4.
5.friend function can access any member of the class to which it is friend.
6.friend function cannot access the members of the class directly
7.it has no caller object.
8.it should not be defined with membership label.

#friend function can be friend with more than one class.


*/
#include<iostream>
using namespace std;

class B; //formal declaration
class A{
    int a;
    public:

    void set_data(int);
    void show_data();
    
    friend void add(A ,B); //define inside the class

};

class B{
    int b;
    public:

    void set_data(int);
    void show_data();
    
    friend void add(A ,B); //define inside the class

};

void A::set_data(int c)
    {
        a=c;
    }

void B::set_data(int c)
    {
        b=c;
    }

void A::show_data()
    {
        cout<<a;
    }

void B::show_data()
    {
        cout<<b;
    }

void add(A aobj,B bobj) //dont define with membership label as it is not the member function
{
    cout<<"addition is : "<<aobj.a+bobj.b; //accessing the data of two classes at same time
}

int main()
{
    A obj1;
    B obj2;
    obj1.set_data(34);
    obj2.set_data(67);
    add(obj1,obj2);//it has no caller object
    return 0;
}
/*
    member function of one class can be  friend of another class.

*/

#include<iostream>
using namespace std;

class A
{
    int a;
    public:

    void get()
    {
        return a;
    }
    

};

void A::member_of_A2()
{
    cout<<"bye";
}

void A::member_of_A()
{
    cout<<greet;
}
class B{

    //if we want to make the member function of class A as friend
    //of this class then we will use scope resolution operator



    friend void A::member_of_A();
    friend void A::member_of_A2();

    //we can make whole class A as a friend so that we can access all the members of
    //class A 

    friend class A;

};

int main()
{   
    
    return 0;
}
/*
*Memory Leak:
    program gets memory out of which some memory is consumed and some memory is free
    if we create the memory block using new keyword then it will get memory from free memory area
    and if we delete the pointer which is pointing to the memory block then we can't access that memory 
    and also we can't relaease that memory then we can say it is MEMORY LEAK.


    *due to the early binding compiler will check the type of pointer and calls the destructor of pointer type class.
    and hence the destructor of the class whose object's address is stored in pointer will not be execute.
    *hence to avoid this we declare the destructor as virtual to avoid early binding.


*/
#include<iostream>
using namespace std;


class A{
    int* pa;
    public:

    A()
    {
        cout<<"\nA CONST\n";
        pa = new int;
    }

    void fun()
    {
        cout<<"\nHello\n";
    }

    virtual ~A() // virtual destructor 
    {
        cout<<"\nA DEST\n";
        delete pa;
    }

};

class B:public A{
    int* pb;
    public:
    B()
    {
        cout<<"\nB CONST\n";
        pb = new int;
    }

    ~B() //by default virtual no need to write virtual keyword if write then also its okkkkk.
    {
        cout<<"\nB DEST\n";
        delete pb;
    }
};



int main()
{
    
    A *ptr = new B;
    delete ptr; // it will check the type of the ptr and runs the destructor accordingly

    return 0;
}
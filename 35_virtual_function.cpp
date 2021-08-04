/*
the pointer of parent class type can hold the address of its
descendent class type.

if we create the pointer of type parent class and store the address
of the object of child class.and we called the method using pointer
then due to the early binding method from parent class will be called
and this is the problem we wanted to call the method of the child to solve
this problem we use virtual function.

if we called the virtual function using the pointer then instead of early binding
late binding will happen. and the it will call the method from the class whose object's
address is stored in the pointer.

====================================================================================================

if in a class their is any virtual method then compiler will create the pointer (*_vptr)  and 
it will also create the static array of pointer also called as the vtable and its different for all
its descendent classes. vptr will contain the address of vtable.

if object of A is created then vptr will contain the address of the vtable of A class.

vtable will contain the address of the all virtual function.

if there is virtual function in parent class and not in child class then vtable of
child class will contain the address of virtual function of parent class.




*/

#include<iostream>
using namespace std;

class base{
    public:
    void fun(){
        cout<<"base fun\n";
    }

    virtual void vFun() //virtual function
    {
        cout<<"base virtual fun\n";
    }
};

class child:public base{
    public:
    void fun(){
        cout<<"child fun\n";
    }

    void vFun()  //it is by default virtual 
    {
        cout<<"child virtual fun\n";
    }
};

int main()
{
    base *ptr;
    child obj;
    ptr=&obj;

    ptr->fun(); //EARLY BINDING

    ptr->vFun(); //late binding -- checks address
    return 0;
}
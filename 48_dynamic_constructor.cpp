/*

constructor can allocate dynamically created memory to the object
thus,object is going to use memory region which is dynamically created by constructor.

constructor does not allocate memory to object
first object is created (memory get allocated) and then constructor is called.
 


*/

#include<iostream>
using namespace std;

class A
{
    private:
    
    int *point;
    int v;

    public:

    A(){
 //dynamic constructor
        point = new int; //allocating memory at run time
        *point = 100;

        v =10;

    }

    void display(){
        cout<<*point<<"\t"<<v;
    }
    
    
    ~A()
    {
    	delete point;
	}


};

int main()
{
    A obj;
    obj.display();
    return 0;
}

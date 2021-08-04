/*
Constructor:-
1.Constructor is a member function of a class.
2.the name of the constructor is same as the name of class.
3.it has no return type.
4.it must be an instance member function, that is it can never be static.
5.constructor is implicitely invoked when an object is created.
6.constructor is used to solve problem of initialization.

# if there is no constructor in class then compiler will create the two constructor 
# as default constructor and copy constructor
#
# if we create any constructor in our class then compiler will not create default constructor 
# but it will create the copy constructor


*/

#include<iostream>
using namespace std;

class my_class
{
    int no;
    public:
     my_class()   //it get implicitely called when object is create
     {
         cout<<"default constructor\n"; 
         no=67;
     }

     my_class(int val) //parametrized constructor
     {
         cout<<"parametrized constructor\n";
         no=val;
     }

     my_class(const my_class  &obj) //copy constructor
    {
        cout<<"copy constructor\n";
        no = obj.no;
    }

    void show_value()
    {
        cout<<no;
    }
};

// my_class::my_class(int val) //parametrized constructor
//      {
//          cout<<"parametrized constructor\n";
//          no=val;
//      }


int main()
{
    my_class obj,obj1,obj2; //default constructor will called 3 time

    my_class obj7=obj1; // copy constructor 

    my_class obj3(45),obj4(12); // parametrized constructor

    my_class obj5 = my_class(90); // 

    obj5.show_value();

    my_class obj6 = 1000; //if there is only one argument //another way  // parametrized constructor

    return 0;
}
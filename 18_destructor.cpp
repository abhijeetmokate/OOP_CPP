/*
Destructor
1.destrucotr is an instance member function of a class
2.the name of destructor is same as class but preceded with ~ . 
3.destructor can never be static
4.it has no return type
5.it takes no argument (no overloading is possible).
6.it is invoked implicitely when object is going to destruct.
7.we can say it is the last function of class which will execute.
8.it should be defined to release the resources allocated to an object.
*/
#include<iostream>
using namespace std;

class myClass{
    int * ptr;
    public:
    myClass()
    {
        ptr = new int;
        cout<<"constructor called\n";
    }

    ~myClass() // destructor
    {
        delete ptr;
        cout<<"destructor called\n";
    }
};

int main()
{
    myClass obj;
    cout<<"hello\n";
    myClass obj1;
    return 0;
}
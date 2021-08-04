/*
primitive data type:-
    int,char,float,double

class type:-
    class type is any class you defined

                        PRIMITIVE TYPE TO CLASS TYPE CONVERSION CAN BE IMPLEMENTED USING THE CONSTRUCTOR
*/

#include<iostream>
using namespace std;


class complex{
    int real,img;
    public:
    complex()
    {   }

    complex(int arg)
    {
        real = arg;
        img = 0;
    }

    void setData(int a, int b)
    {
        real = a;
        img = b;
    }

    void showData()
    {
        cout<<"real="<<real<<"\timg="<<img<<endl;
    }

};

int main()
{   
    
    complex c;
    c.setData(4,5);
    c.showData();

    complex c1;
    int a = 2;

    c1 = a; // primitive type to class type conversion 
            //here the constructor will be called with one argument
    c1.showData();

    return 0;
}
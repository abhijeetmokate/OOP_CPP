/*
Operator Overloading:
1.To give the special meaning to already existing operator.
2.when an operator is overloaded with multiple jobs, it is known as operator overloading.
3.it is a way to implement compile time polymorphism.
4.any symbol can be used as the function name:
    if it is valid operator in c language.
    if it is preceded by operator keyword
5.you cannot overload sizeof and ?: operator.
*/

#include<iostream>
using namespace std;


class complex
{
    int real,img;
    public:

    complex()
    {
        cout<<"\nCONSTRUCTOR\n";
    }

    void set_data(int, int); 

    void show_data();

    complex add(complex );

    complex operator-();// just like the normal function just use operator keyword.
    

};

void complex::set_data(int a,int b)
    {
        real = a;
        img = b;
    }

void complex::show_data()
    {
        cout<<real<<"+i"<<img;
    }

complex complex::add(complex c)
{
    complex temp;
    temp.img = img+c.img;
    temp.real = real+c.real;
    return temp;
}


// =======================UNARY OPERATOR OVERLOADING==========================================
complex complex::operator-()
    {
        complex temp;
        temp.real = -real;
        temp.img = -img;
        return temp;
    }

//============================BINARY OPERATOR OVERLOADING====================================

int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(1,4);

    c3 = -c1; // c1 called - operator c1= caller object
    c3.show_data();

    c3 = c2.operator-();//same as above
    c3.show_data(); 

    return 0;
}
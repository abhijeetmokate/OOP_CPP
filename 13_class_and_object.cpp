/*
Class And Object::
1.All the members of the class are by default private.
2.Class is the decription of object
3.object is the instance of class
4.state of the object is the collection of the data of the member variables of that object
*/

#include<iostream>
using namespace std;

class complex
{
    int real,img;   //instance member variables //by default private
    
    public:

    //since the function is ***defined*** inside the class hence it is by default inline function

    void set_data(int r,int i){
        real=r;
        img=i;
    }

    //it is not by default inline we can make it inline using inline keyword
    void display();  //declaration of display inside the class

    complex add(complex); //declaration 

};

//complex:: ==>membership label , :: ==>scope resolution operator

void complex::display()  //definition outside the class but still its the instance member function 
    {
        cout<<real<<"+i"<<img<<endl;
    }


complex complex::add(complex c) //definition
{
    complex c3;
    c3.real = real+c.real; //here real belong to caller object 
    c3.img = img+c.img;

    return c3;
}


#include<iostream>
using namespace std;

int main()
{
    complex c1;  //it is not a variable it is a object.
    c1.set_data(4,5);
    c1.display();

    complex c2;
    c2.set_data(1,5);

    complex c3;
    c3 = c1.add(c2); //c1 is caller object
    c3.display();
    return 0;
}
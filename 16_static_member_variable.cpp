/*
Static Member Variable:
1.Declared inside the class body.
2.also known as the class member variable.
3.they must be defined outside the class.
4.static member variable does not belong to any object, but to the whole class.
5.there will be only one copy of static member variable for the whole class.
6.any object can use the same copy of class variable.
7.they can also be found with class name.


Static member function:
1.they are qualified with the keyword static.
2.they are also called class member funcion.
3.they can be invoked with or without instance.
4.they can only access the static member of the class.

*/

#include<iostream>
using namespace std;

class account
{
    
    static int age;
    public:
    int balance;
    static float roi; //declaration inside class
    public:

    void set_balance(int bal)
    {
        balance=bal;
    }

    static void set_age(int no) // also called as class function
    {
        age=no;
        //balance = 20; // ERROR--static function can only access the static variable
    }

    static int show_age();

};

float account::roi;  //definition outside of class //we can set the value here // it is must to defined it outside of class
int account::age;

int account::show_age() //static member function can be defined inside as well as outside of the class.
    {
        return age;
    }

int main()
{
    //even if we did not create any instance of class still the static member variable 
    //is get created 
    cout<<"hello\n";
    account::roi = 4.3f; // accessing the static member variable as it is public
    cout<<account::roi<<endl;

    //accessing the private static member variable using static member function

    cout<<account::show_age()<<endl; //can call the static member function without instance
    account::set_age(23); //========================way to access the static member function
    cout<<account::show_age();

    //cout<<account::age;

    return 0;
}
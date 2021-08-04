#include<iostream>
using namespace std;



class person{
    private:
    mutable string name;  // mutable variable
    int age;
    public:

    int t;
    const int u;

    person():name("null"),age(0),t(0),u(0) {}
    person(string nm,int a):name(nm),age(a),t(9),u(6) {}

    void change() const // It will avoid the change in memeber variable of object
    {
        //age = 10;   //it will give error as we are changing the memeber variable | also age is not mutable variable
        name = "mokate";  // only mutable variable can be modify inside the const member function | here name variable is mutable
        cout<<name<<" "<<age<<endl;
    }

    void non_const_function()
    {
        name = "changed"; // we can change the mutable variable vlaue in non const function also.
        cout<<"non_const_fun";n
    }

};


int main()
{
    person obj = {"Abhijeet",21}; // object is non const | we can call both const and non const function using non const object 
    obj.change(); // non const object can call the const function
    obj.non_const_function(); //
    cout<<obj.t;
    cout<<obj.u; // non const object can call the const variable

    const person obj1("shiv",22); // object is const | we can only call the const function using const object
    obj1.change(); // const object can call the const method
    //obj1.non_const_function(); // will give error
    cout<<obj1.t; // const varibale can call the non const as well as the const varible
    cout<<obj1.u; //const variable



    return 0;
}
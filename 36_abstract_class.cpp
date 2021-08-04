/*

pure Virtual function:-
1.A do nothing function is called as pvf.

    void fun()=0;

abstract class:

A class containing pure virtual function is called abstract class.

we cant make the object of abstract class.
we can inherit the abstract class.
It is compulsory to override the pure virtual function in child class of abstract class.
    
*/

#include<iostream>
using namespace std;


class person{  //abstract class
    string name;
    int age;
    public:

    virtual bool permission()=0;  //pure virtual function // do nothing function

    void set_name(string n)
    {
        name = n;
    }

    void get_name()
    {
        cout<<name<<endl;
    }

    void set_age(int a)
    {
        age=a;
    }

    void get_age()
    {
        cout<<age<<endl;
    }

};

class student:public person{
    int student_id;
    public:

    bool permission()  //override
    {
        return false;
    }

    void set_id(int id)
    {
        student_id = id;
    }

    void get_id()
    {
        cout<<student_id<<endl;
    }
};

class teacher:public person{
    int teacher_id;
    public:

    bool permission()
    {
        return true;
    }

    void set_id(int id)
    {
        teacher_id = id;
    }

    void get_id()
    {
        cout<<teacher_id<<endl;
    }
};


int main()
{

    teacher obj;
    student obj2;
    


    


    return 0;
}
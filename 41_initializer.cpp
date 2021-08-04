/*
initializers- initializer list :-
1.initializer list is used to initialize data members of a class.
2.the list of members to be initialized is indicated with constructor
  as a comma seperated list followed by a colon(:).  i.e. person(int a):age(a)
3.There are situation where initialization of data members inside construcor 
  doesn't work and initializer list must be used.
        a.for initialization of non-static const data members.
        b.for initialization of reference members.
*/
#include<iostream>
using namespace std;

class person
{
    const string name; // need to assign the value during declaration. 
    int &age; // need to assign value during declaration.
    public:
    person(int a,string n):name(n),age(a) // initializer list
    {
        //can't initialize the const and reference variable in constructor.
        //hence we have used the initializer list

    }
};

int main()
{   
    int age = 19;
    person obj(age,"abhijeet");
    return 0;
}
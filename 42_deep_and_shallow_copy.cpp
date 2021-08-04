
/*
Shallow Copy:-

    how does the object copy occurs?
    there are two methods it occurs:
    a.copy constructor
    b.implicit copy assignment operator

    a.copy constructor: // constructor is made by compiler automatically
    1.it get called when we initialize the object with another object
      of same type ""during declaration"" i.e. person obj = obj1; 

    b.copy assignment operator: // = overloaded implicitely by compiler
    1.it get called when we first declare the object and then assign the 
      another object to it i.e. person obj;   obj=obj2;

Deep Copy:-

    creating an object by copying data of another object along with the values of
    memory resources resides outside the object but handled by that object.

    

*/

#include<iostream>
using namespace std;

class shalowCopy
{
    private:
    int a;
    int b;
    public:

    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"\na="<<a<<" b="<<b<<endl;
    }
};

class deepCopy
{
    private:
    int a;
    int *b;
    public:

    deepCopy()
    {
        b = new int;
    }

    deepCopy(deepCopy &obj)
    {
        a = obj.a;
        *b = *(obj.b);
    }

    void setData(int x, int y)
    {
        a = x;
        *b = y;
    }

    void showData()
    {
        cout<<"a="<<a<<" *b="<<*b<<endl;
    }

    ~deepCopy()
    {
        delete b;
    }
    
};

int main()
{

    shalowCopy obj1;
    obj1.setData(3,4);
    obj1.showData();

    //copy constructor
    shalowCopy obj2=obj1; //here shallow copy is occuring as there is no pointer in class
    obj2.showData();

    //implicit copy assignment operator
    shalowCopy obj3;
    obj3 = obj1;


    //deep copy

    deepCopy dobj;
    dobj.setData(44,23);
    dobj.showData();

    deepCopy dobj1 = dobj; //deep copy is occuring here

    dobj.setData(10,20);
    dobj1.showData();


    return 0;
}
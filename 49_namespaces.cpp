/*
    HEADER FILE CONTAINS THE DECLARATION OF (IDENTIFIERS) FUNCTION,VARIABLE, CLASSES, MACROS,ETC AND NOT THE DEFINITION.

    if we add two header files in our programe and both the header files containing the functions with same name then 
    name conflict can be occur hence namespace is necessary.


    namespace is a container for identifiers
    it puts the names of its members in a distinct space so that they dont conflict with the names in other namespaces or global namespace.


======== How to create the namespace?

    namespace myspace{
        //declarations
    }

    #namespace definition doesnot terminates with a semicolon like in class definition
    #the namespace definition must be done at global scope or nested inside another namespace
    #you can use an alias name for your namespace name, for ease of use
        namespace ms = myspace
        
    
    REMEMBER===
    
    Namespace is not a class and we cant create the instance of namespace
    there can be unnamed namespace too
    namespaces can be extended
        if we define the two namespaces with same name then compiler will consider it as
        single namespace consisting all the members of the both namespaces.

    The using directive::
    * using keyword allows you to import an entire namespace into your program with a global scope
    * it can be used to import a namespace into another namespace or any program.

*/

#include<iostream>
using namespace std; // std namespace is available in iostream header file

#include<D:\My C++\abhi.hh> // .hh = c++ header file    // .h = c header file
using namespace mynewstd;

void mynewstd::method1()
{
    cout<<"method1\n";
}

void mynewstd::hello::fun()
{
    cout<<"fun";
}



namespace myspace{
    
    int data;
    void fun();

    class cls{
        public:
        void cls_fun();
    };


}




using namespace myspace;

void myspace::fun(){ // scope resolution is necessary even if (using namespace myspace) is written
    cout<<"Data = "<<data;
}

void myspace::cls::cls_fun() // cls_fun is in cls class which is in myspace namespace
{
    cout<<"\nclass function\n";
}

int main(){

    //////namespace definition cant be local 
    // namespace space{
    //    void fun();
    // }


    //myspace obj // cant create the object of the namespace

    myspace::data = 78; // scope resolution operator 
    fun();          // as we already mention the ((using namespace myspace;))
    myspace::cls obj; // created the object of the class declare in the myspace namespace
    obj.cls_fun();


    //declare in the outside this program in abhi.h header file
    method1();
    hello ob;
    ob.fun();

    return 0;
}
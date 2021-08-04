/*
Function in C++:
1.Function is a block of code performing a unit task.
2.Function has name, return type, and argument
3.function is a way to achieve modularization
4.function can be user-defined or pre-defined
5.predefined functions are declared in header files and defined in library files.
*/

/*
Function declaration:
1.function declaration is also known as the function prototype.
2.function need to be declared before use.
3.function can be declared locally or globally.
4.return_type function_name(arguments);
5.function definition is a block of code.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void fun(); // global function declaration

//function definition
void fun()
{
    cout<<"Func function";
    cout<<"Abhijeet MOkate";
}

int main()
{
    //void fun(); //local function declaration
    cout<<"Main Function"<<endl;
    fun(); //function call
    return 0;
}
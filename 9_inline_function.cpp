/*
Benefits of function:
1.easy to read
2.easy to modify
3.reusability
4.easy to debug
5.better memory utilization:-


Inline Function:
1.to eliminate the cost of calls to small functions,c++ proposes a new 
  feature called inline function.
2.an inline function is a function that is expanded in line when it is invoked.
3.compiler replaces the function call with the corrosponding function code.
4.inline is the request not a command
5.the benefit of speed of the inline functions reduces as the function grow in size.
6.so the compiler may ignore the request in some situations.
    few of them:
                function containing loop,switch.goto
                function with recursion
                containing static variable

function is get loaded in ram only when it get called and memory
taken by function is released when the execution of the function 
completes.
But to load the function in memory takes some time
if the function is small such that the time required to load that function in memory is 
more than that of the memory space then it is not good idea to create the function.
but if we donot create the function then we can't take the benefits of function
and thats where the inline function comes in the picture.
compiler takes the fuction call and replace it with inline function definition

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

inline void fun(); // inline function

int main()
{
    
    cout<<"u r in main\n";
    fun();              //compiler will replace this line with function code if conditions get satisfied
}

void fun() 
{
    cout<<"ur in fun";
}
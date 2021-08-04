/*
1.Exception is any abnormal behaviour,run time error.

#program statements that you want to monitor for exceptions are contained
in a try block
#if any exception occurs within the try block it is thrown using throw
#the exception is caught using catch and processed

it is necessary to write try and catch both.

if after throwing exception it is not caught by any catch block then it will called terminate function
and terminate function calls the abort function.

try block can contain more than 1 throw;

if we write the throw outside of the try block then we cant handle that exception
*/

#include<iostream>
using namespace std;


void fun()
{
    throw 100;
}

int main()
{
    cout<<"welcome\n";
    try{
        //string exp = "abhijeet";
        if(false)
        throw 4;

        if(true)
        fun();
        cout<<"in try"<<endl;
    }
    
    catch(int e){
        cout<<"exception no:"<<e<<endl;
    }

    catch(char) // if we dont want thrown value skip variable
    {
        cout<<"handled";
    }

    catch(string e)
    {
        cout<<"exception handled::"<<e<<endl;
    }

    catch(...) // ... = ellipse
    {
        cout<<"can handles multiple exceptions"<<endl;
    }
    

    cout<<"last line"<<endl;

    return 0;
}
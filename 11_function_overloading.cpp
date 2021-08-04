/*
function overloading :

How function overloading is resolved?

1.First c++tries to find the exact match.this is the case where 
  actual argument exactly matches the parameter type of one of the overloaded
  funtion.
2.If no exact match is found  cpp tries to find a match through promotion (in actual argument)
    -char,unsigned char, short promoted to an int
    -float is promoted to double
3.if no promotion is found cpp tries to find a match through standard conversion

*/

#include<iostream>
using namespace std;

int sum(int,int);
float sum(float,float);


int main()
{

    char c,b;

    c='A';
    b='v';

    float a = sum(c,b);
    cout<<endl<<a;
}

int sum(int a,int b)
{
    cout<<"int sum";
    return a+b;
}

float sum(float a,float b)
{
    cout<<"float sum";
    return a+b;
}
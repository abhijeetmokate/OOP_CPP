/*
Reference Variable:

1.reference means address
2.reference variable is an internal pointer
3.declaration of reference variable is preceded with '&' symbol.
4.reference variable must be initialized during declaration.
5.it can be initialized with already declared variables only.
6.reference variables can not be updated.

*/

#include<iostream>
using namespace std;

int main()
{

    int x=30;
    int &y = x;

    cout<<y<<endl<<x;
    return 0;
}
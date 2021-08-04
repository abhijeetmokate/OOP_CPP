#include<iostream>
using namespace std;

void swap(int*,int*); 

int main()
{
    
    int a,b;
    a=2;
    b=6;
    cout<<a<<"  "<<b<<endl;
    swap(&a,&b);
    cout<<a<<"  "<<b;
}

void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
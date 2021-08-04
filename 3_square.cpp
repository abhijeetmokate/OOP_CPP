#include<iostream>   //only declartion of cin and cout
using namespace std;

int main(){

    int x;  //declaration of variable
    cout<<"Enter a Number"<<endl;
    cin>>x;
    int s = x*x; // dynamic initialization - value will assign to s during runtime
    cout<<"square of "<<x<<" is "<<s;

}
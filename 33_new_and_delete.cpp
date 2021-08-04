

#include<iostream>
using namespace std;


class Complex{

    public:
    void display(){
        cout<<"hello";
    }

};

int main()
{
    int *p = new int;
    float *f = new float;

    int *arr = new int[6];
    float *arr2 = new float[5];

    Complex *com = new Complex;

    delete p;
    delete f;
    delete []arr;
    delete []arr2;
    delete com;

    return 0;
}
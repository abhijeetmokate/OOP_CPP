/*
                                    CASTING OPERATOR IS USED TO CONVERT CLASS TYPE INTO PRIMITIVE TYPE
*/

#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:
    
    void setData(int a,int b)
    {
        real = a;
        img = b;
    }

    void showData()
    {
        cout<<"real="<<real<<"\timg="<<img<<endl;
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////

    operator int() // casting operator to convert into int type
    {
        return real; // we can return any int type value here
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////
};

int main()
{   
    complex c;
    c.setData(23,4);
    c.showData();

    int val;

    val = c; // here the casting operator will be called

    cout<<"val="<<val;

    return 0;
}
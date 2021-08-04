/*

Q. why insertion and extraction is overlad as friend function?
we cant make changes to the istream and ostream class
we cant make the function as the member function because if we do so
then it will only invoked by its caller object
but in cout and cin left side of the insertion and extraction operator there is always cout and cin


*/
#include<iostream>
using namespace std;


class complex{

    int real,img;
    public:

    void setData(int, int); 
    void showData();

    friend ostream& operator<<(ostream&, complex);//friend because we want to access the member of the complex class.
    friend istream& operator>>(istream&, complex&);//reference of complex as we want make changes in the actual parameter



};

ostream& operator<<(ostream& out, complex c)
    {
        out<<c.real<<"+i"<<c.img;
        return out; //for cascading purpose
    }

istream& operator>>(istream& in, complex& c)
{
    in>>c.real>>c.img;
    return in;
}

void complex::setData(int a,int b)
{
    real = a;
    img = b;
}

void complex::showData()
{
    cout<<real<<" "<<img<<"\n";
}

int main()
{
    complex c1,c2,c3;


    cin>>c1>>c2;
    cout<<c1<<c2; // cout<<c1 return the cout ===> cout<<c2
    //c3.showData();

    return 0;
}
#include<iostream>
using namespace std;

class cls
{
    private:
    int a;
    public:
    cls() 
    {
        a = 9;
    }
     void printt() const 
    {
        cout<<a;
    }

    void fu()
    {

    }
};

int main()
{
    const cls obj;
    obj.printt();
    //obj.fu();
}
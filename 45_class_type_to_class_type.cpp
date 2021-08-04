/*


Class to class type can be implemented using two ways:
a)Using constructor
b)using casting operator

*/
#include<iostream>
using namespace std;

class student{
    string name;
    int age;
    public:

    void setData(string nm,int ag)
    {
        name = nm;
        age = ag;
    }

    void showData()
    {
        cout<<name<<"\t"<<age<<endl;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

};

class teacher{
    string tname;
    int tage;
    public:

    void setData(string nm,int ag)
    {
        tname = nm;
        tage = ag;
    }

    void showData()
    {
        cout<<tname<<"\t"<<tage<<endl;
    }

    teacher(){ }

    teacher(student s){
        tname = s.getName();
        tage = s.getAge();
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

class B
{
    int x,y;
    public:
    void setData(int a,int b)
    {
        x = a;
        y = b;
    }

    void showData()
    {
        cout<<x<<"\t"<<y<<endl;
    }
};


class A
{
    int m,n;
    public:
    void setData(int a,int b)
    {
        m = a;
        n = b;
    }

    void showData()
    {
        cout<<m<<"\t"<<n<<endl;
    }

    operator B()
    {
        B obj;
        obj.setData(m,n);
        return obj;
    }

};

int main()
{

    student s;
    teacher t;
    s.setData("abhi",21);
    s.showData();
    
    t = s;    //using constructor
    t.showData();


    A aobj;
    B bobj;

    aobj.setData(12,1);
    aobj.showData();

    bobj = aobj; // using casting operator
    bobj.showData();


    return 0;
}
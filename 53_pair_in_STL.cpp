/*

*/
#include<iostream>
#include<utility>  //pair
#include<array>
using namespace std;

class student{

    string name;
    int rollno;
    public:
    void showInfo()
    {
        cout<<"INFo";
    }
};


int main()
{
    pair <int,student> stud;


    student sobj;
    stud = make_pair(23,sobj); 

    pair <student,int> stud1 (sobj,56);
    student s = stud1.first;
    s.showInfo();
    cout<<" "<<stud1.second;

    pair <int,int> p1;
    p1=make_pair(23,34);
    cout<<p1.first<<" -- "<<p1.second;

    //we can compare two pairs using == != < > <= >=


}
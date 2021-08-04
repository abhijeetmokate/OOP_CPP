/*
    In pair we can make the group of two values of different type.
    But in tuple we can make the group of many values of different type.
    tuple <int,int,int,int,string,student,boolean> t1;
*/

#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple <int,string,int> t1;
    t1 = make_tuple(12,"abhi",56);//inserting values

    //how to get values??

    int a = get<0>(t1);

    cout<<a;

    cout<<get<1>(t1);
    cout<<get<2>(t1);

    //can we compare two couples ??
    //yes we can compare two tuple using ==,!=,<,>,<=,>=


    return 0;
}
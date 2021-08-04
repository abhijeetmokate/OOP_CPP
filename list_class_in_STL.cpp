/*

*/
#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1;
    list <int> l2 {1,2,3,4,5};
    list <string> l3 {"Abhijeet","Mokate","India","Delhi"};

    list<string>::iterator it = l3.begin(); // iterator is nothing but a  pointer

    while(it != l3.end())
    {
        cout<<*it<<"\t";
        it++;
    }


    //---------size() == total values in the list

    cout<<endl<<l3.size()<<endl;

    //--------push_back() == insrt at end of list

    l3.push_back("String");//insert at last

    //---------push_front() == insert at start

    l3.push_front("Hello");

    it = l3.begin();
    while(it != l3.end())
    {
        cout<<*it<<"\t";
        it++;
    }
    cout<<endl<<l3.size()<<endl;

    // pop_back() and pop_front() ==removes the element from back and front

    l3.pop_back(); // its void funtcion
    l3.pop_front(); // its a void function

    it = l3.begin();
    while(it != l3.end())
    {
        cout<<*it<<"\t";
        it++;
    }
    cout<<endl<<l3.size()<<endl;

    //----------sort() == it sorts the elements of list
    l3.sort();

    it = l3.begin();
    while(it != l3.end())
    {
        cout<<*it<<"\t";
        it++;
    }
    cout<<endl;

    //-----------reverse() == it reverse the list 

    l3.reverse();

    it = l3.begin();
    while(it != l3.end())
    {
        cout<<*it<<"\t";
        it++;
    }


    //----------remove() == use to remove the elements from list

    l3.remove("India"); // remove the element with the value "India" //if two elements are present with same value then remove will remove both the elements
    cout<<endl;
    it = l3.begin();
    while(it != l3.end())
    {
        cout<<*it<<"\t";
        it++;
    }

    //------clear() == removes all the elements from list

    l3.clear();
    cout<<endl;
    cout<<"after clear\n";
    it = l3.begin();
    while(it != l3.end())
    {
        cout<<*it<<"\t";
        it++;
    }


    return 0;
}
/*
    Maps are used to replicate associative arrays.
    Maps contain key-value pair where each key is unique and cannot be changed.
    Keys are always in sorted order in map.
    If keys are of string type then are ordered according to dictionary order.
*/
#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int, string> customer; // associative array
    customer[100] = "ABhijeet";
    customer[123] = "shyam";
    customer[567] = "sam";

    map <int,string> custom {
        {10,"abhi"} ,
        {20,"moka"} ,
        {30,"sandy"} ,
        {50,"adi"}
    };


    //cout<<customer[1212]; // will not print anything

    map<int,string> ::iterator it;
    it= customer.begin();

    while(it!=customer.end())
    {
        cout<<it->first<<"-->"<<it->second<<endl;
        it++;
    }

    //----at()

    cout<<endl<<customer.at(100)<<endl;
     
     //-----size() // checks the size of map

     //cout<<endl<<custom.size()<<endl;

     //----empty() // checks if the map is empty or not 

     //cout<<endl<<custom.empty()<<endl;

     //------insert()  inserts the pair of key value in map

     //customer.insert(pair<int,string>(209,"ram"));

     //----clear() removes all the elements from the map

    return 0;
}
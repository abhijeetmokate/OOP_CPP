/*
    * STL is standard template library
    * it is powerful set of c++ template classes
    * at the core of the c++ standard template library are the following three well structured components.
           * containers
           * algorithms
           * iterators
     

     #Containers - 
     * containers are used to manage collections of objects of a certain kind
     * container library in STL provide containers that are used to create data structures like arrays,linked list, tress etc
     * these containers are generic, they can hold elements of any data type.
     * container library is the collection of classes.
     * the containers are implemented as generic class template.
     * containers help us to implement and replicate simple and complex data structures very easily like arrays,list,trees,and many more
     * container can be used to hold different kind of objects.  
     
     #Algorithms - 
     * Algorithms act on containers they provide the means by which you will perform initialization, sorting, searching, and transforming of the contents of containers.
     * algorithms library contains built in functions that perform complex algorithms on the ata structures.
     
     #iterators
     * iterators are used to step through the elements of collection of objects these collections may be containers or subset of containers
     * iterators in STL are used to point the containers
     * iterators actually acts as a bridge between containers and algorithems.
*/

#include<iostream>
#include<array>
using namespace std;


int main()
{

    array <int,7> array1 = {7,6,4,8,9}; // initialization during declaration

    //array1[0] = 4;
    cout<<array1[0]<<endl; // [] = operator

    cout<<array1.at(3)<<endl; // value at index 3 // it throws out of range exception if try to access index out of bound

    cout<<array1.front()<<endl; // element at index 0

    cout<<array1.back()<<endl; // element at last index i.e.value at index 6 =0

    array1.fill(10); // it will assign 10 to all index values

    for(int i=0;i<array1.size();i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;

    array <int, 7> array2 = {1,2,3,4,5};

    array1.swap(array2); // exchange the values at same index

    for(int i=0;i<array1.size();i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<array2.size();i++)
    {
        cout<<array2[i]<<" ";
    }

    cout<<array1.size()<<endl; // size of array

    return 0;
}
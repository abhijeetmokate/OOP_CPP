/*

    vector supports the dynamic array(size can be change at runtime)

*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1; // creates the blank vector

    vector<int> v2 {1,2,3,4,5}; // capacity is 5 because initialize during declaration // by default capacity is 1

    vector<int> v3(4); // capacity will be 4

    vector<int> v4(9,100); // all values will be set to 100 | capacity = 9
    
    vector<string> v5(3,"hello"); // 


    //we can use the subscript operator [] to accesss the vector elements as like array.
     cout<<v2[3];

    //-----------------push_back()

    vector<int> v6;
    cout<<endl<<v6.capacity(); // capacity = 0
    v6.push_back(10); // first the capacity of the vector will become 1 and then 10 will be added at the last of the vector
    cout<<endl<<v6.capacity(); // capacity = 1
    v6.push_back(10);
    cout<<endl<<v6.capacity();// capacity = 2
    v6.push_back(10);
    cout<<endl<<v6.capacity(); // capacity = 4
    v6.push_back(10);
    cout<<endl<<v6.capacity(); // capacity = 4
    v6.push_back(10);
    cout<<endl<<v6.capacity(); // capacity = 8

    //-------------pop_back()

    cout<<"\nPOP";
    v6.pop_back(); // removes the last element //it does not return value
    cout<<endl<<v6.capacity(); // capacity = 8 // pop_back does not decrease the size of vector

    //---------size()       //capacity and size are different

    cout<<endl<<v6.size(); // size gives the number of elements present in the vector 

    //------------at()

    cout<<endl<<v6.at(2); // gives the value at the index 2

    //----front() = gives the first elements of vector
    //----back() = gives the last element of the vecor

    cout<<endl<<v6.front()<<endl<<v6.back()<<endl;


    // how to insert the element in between two elements

    vector<int>::iterator it;
    it = v6.begin();

    v6.insert(it+1,67); // it will palce the element at 1st index
     
    for(int i=0;i<v6.size();i++)
    cout<<v6.at(i)<<"\t";

    //--------clear()

    v6.clear(); // it removes all the elements from the vector
    cout<<endl<<v6.size();

    


    return 0;
}
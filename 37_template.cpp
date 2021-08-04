/*

*/

#include<iostream>
using namespace std;


template <class X>  // X is just an place holder
X big(X a, X b)
{
    if(a>b)
    return a;
    else
    {
        return b;
    }
    
}


template <class X,class Y> //template function
X big1(X a,Y b)
{
    if(a>b)
    return a;
    else
    {
        return b;
    }
    
}

template <class X>
class ArrayList{ // template class or generic class

    struct controlBlock{
        int capacity;
        X *arr_ptr;
    };

    controlBlock *ptr;

    public:
    ArrayList(int cap)
    {
        ptr = new controlBlock;
        ptr->capacity = cap;
        ptr->arr_ptr = new X[ptr->capacity];
    }

    void addElement(int index,X data){
        if(index>=0&&index<ptr->capacity)
        ptr->arr_ptr[index] = data;
        else
        {
            cout<<"index out of range";
        }
        

    }

    void getElement(int index, X &data)
    {
        if(index>=0&&index<ptr->capacity)
        {
            data = ptr->arr_ptr[index];
        }
        else
        {
            cout<<"index out of range";
        }
        
    }

};

int main()
{
    // cout<<big(2,3)<<endl;
    // cout<<big(3.4,1.2)<<endl;
    // cout<<big1(2.6, 2);

    ArrayList <float>list1(5); // need to mention the datatype during object creation 
                               //in class template (generic class)
    float data;
    list1.addElement(0,8.9);//index,data
    list1.getElement(0,data);
    cout<<data;

    return 0;
}


#include<iostream>
using namespace std;

int ternary_search(int *arr, int size, int value)
{
    int upper_bound,lower_bound;
    upper_bound = size-1;
    lower_bound = 0;
    int mid1,mid2;

    while(lower_bound<=upper_bound)
    {
        mid1 = lower_bound + (upper_bound-lower_bound) / 3 ;
        mid2 = upper_bound - (upper_bound-lower_bound) / 3 ;

        if(arr[mid1] == value)
        return mid1;
        else if(arr[mid2] == value)
        return mid2;
        else if(value<arr[mid1])
        upper_bound = mid1-1;
        else if(value>arr[mid2])
        lower_bound = mid2+1;
        else
        {
            lower_bound = mid1+1;
            upper_bound = mid2-1;
        }

    }

    return -1;
}


int ternary_search_recursive(int *arr, int value, int lower_bound, int upper_bound)
{

    if(lower_bound<=upper_bound)
    {
        int mid1 = lower_bound + (upper_bound-lower_bound) / 3; 
        int mid2 = upper_bound - (upper_bound-lower_bound) / 3;

    if(value == arr[mid1])
    return mid1;
    else if(value == arr[mid2])
    return mid2;
    else if(value<arr[mid1])
    ternary_search_recursive(arr,value,lower_bound,mid1-1);
    else if(value>arr[mid2])
    ternary_search_recursive(arr,value,mid2+1,upper_bound);
    else
    {
        ternary_search_recursive(arr,value,mid1+1,mid2-1);
    }
    }

    else
    return -1;

}


int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout<<ternary_search(arr,10,5)<<endl;

    cout<<ternary_search_recursive(arr,9,0,9);

    return 0;
}
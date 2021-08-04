#include<iostream>
using namespace std;

int binary_search(int *arr,int size, int val)
{
    int upper_bound = size-1; // 
    int lower_bound = 0;
    int mid = 0;

    while(lower_bound<=upper_bound)
    {
        mid = (lower_bound+upper_bound)/2 ;
         if(val<arr[mid])
         {
             upper_bound = mid-1;
         }
         else if(val>arr[mid])
         {
             lower_bound = mid+1;
         }
         else
         {
             return mid;
         }
    }

    return -1;
}

int binary_search_recur(int *arr, int upper_bound, int lower_bound, int key)
{
    if(lower_bound>upper_bound)
    return -1;

    int mid = (upper_bound+lower_bound)/2;
    
    if(key<arr[mid])
    return binary_search_recur(arr,mid-1,lower_bound,key);
    else if(key>arr[mid])
    return binary_search_recur(arr,upper_bound,mid+1,key);
    else
    return mid;

}

int main()
{
    int arr1[5] = {1,2,3,4,5} ;
    
    int index = binary_search(arr1,5, 8);
    cout<<index<<endl;

    cout<<binary_search_recur(arr1,4,0,1);


    return 0;
}
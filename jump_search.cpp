#include<iostream>
#include<cmath>
using namespace std;


int jump_search(int *arr, int size, int value)
{
    int block_size = sqrt(size);
    int start = 0;
    int end = block_size;

    while(arr[end]<=value && end<size-1) //  |1|2|3|4|5|6|7|8|9|10|11|
    {
        start = end;
        end = end+block_size;

        if(end>size-1)
        end = size-1;

    }

    for(int i=start;i<=end;i++) //linear search
    {
        if(arr[i] == value)
        return i;
    }

    return -1;

}


int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout<<jump_search(arr,10,4);
    return 0;
}
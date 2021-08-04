#include<iostream>
using namespace std;


void TOH(int disks,int A,int B, int C)  // TOH(no_of_disks, begining, helper, destination)
{

    if(disks>0)
    {
        TOH(disks-1,A,C,B);
        cout<<"Move a disk from "<<A<<" to "<<C<<endl;
        TOH(disks-1,B,A,C);
    }

}

int main()
{
    TOH(3,1,2,3);
    return 0;
}
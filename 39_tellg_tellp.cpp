/*



*/

#include<iostream>
#include<fstream>
using namespace std;



int main()
{
    //tellg = to get the position of the get pointer
    //method of ifstream class
    //
    ifstream fin;
    fin.open("file.txt");
    cout<<fin.tellg()<<endl; // 0

    char data;
    fin>>data;
    cout<<fin.tellg()<<endl;

    fin>>data;
    cout<<fin.tellg()<<endl;

    fin>>data;
    cout<<fin.tellg()<<endl;
    cout<<endl;

    fin.close();

    //tellp = to get the position of the put pointer
    //method of the ofstream class.
    //
    ofstream fout;
    fout.open("file.txt",ios::app);
    cout<<fout.tellp()<<endl;

    fout<<"mokate";
    cout<<fout.tellp();

    fout.close();
    return 0;
}
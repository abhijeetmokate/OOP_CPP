/*
    

    to write into the file we will use the object of the ofstream class
    and to read we use ifstream object.

File opening mode:
1.ios::in = read mode
2.ios::out = write mode
3.ios::app = append mode
4.ios::ate = open in update mode
5.ios::binary  = open in binary mode

#By default file open in text mode.
#Binary mode can be specified with ios::binary.

*/

#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    ofstream fout; // object of stream
    fout.open("file.txt");//creates a new if absent
    fout<<"mokate abhijeet";
    //getch();
    fout.close(); // changes get reflect in the  hard disk after we close the stream
                  //by default at the end of the program it closes automatically.

    char c[20];
    ifstream fin;
    fin.open("file.txt");
    //fin.getline(c,20);
    //cout<<c;
    char character;
    while(fin.eof()!=1)  //if we reach end of file then returns 1
    {
        character=fin.get();   //get() will also take the space unlike extraction operator
        cout<<character;
    }

    fin.close();

    ofstream fout1;
    fout1.open("file1.txt",ios::out|ios::binary|ios::app); //multiple opening mode
    fout1<<"opening mode\n";
    fout1.close();

   
}
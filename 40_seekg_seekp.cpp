/**/
#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    /*
    seekg() :-
    1.defined in the istream class
    2.prototype:
        a.istream& seekg(streampos pos)
        b.istream& seekg(streamoff off,ios_base::seekdir way)
    3.pos is new absolute position withing the stream (relative to the begining).
    4.off is offset value, relative to the way parameter
    5.way values ios_base::beg, ios_base::cur and ios_base::end
    */

   ifstream fin;
   fin.open("file.txt");
    
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(6); // it will put the get pointer at index 6
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<(char)fin.get()<<endl;

    //istream& seekg(streamoff off, ios_base::seekdir way)

    cout<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(4,ios_base::cur); // move pointer 4 index forward from current index
    cout<<fin.tellg()<<endl;

    fin.seekg(-2,ios_base::cur); // move pointer 2 index backward from current index
    cout<<fin.tellg()<<endl;


   fin.close();


    /*
    seekp() :-
    1.defined in the ostream class
    2.prototype:
        a.ostream& seekp(streampos pos)
        b.ostream& seekp(streamoff off,ios_base::seekdir way)
    3.pos is new absolute position withing the stream (relative to the begining).
    4.off is offset value, relative to the way parameter
    5.way values ios_base::beg, ios_base::cur and ios_base::end
    */

   ofstream fout;
   fout.open("file12.txt",ios::ate|ios::app); // in order to access the file ramndomly we should open it 
                                     //it in the update mode i.e. ios::ate


    cout<<fout.tellp()<<endl;
    fout.seekp(2,ios_base::cur);
    cout<<fout.tellp()<<endl;

    fout.seekp(-1,ios_base::end);
    cout<<fout.tellp()<<endl;

    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp()<<endl;



   fout.close();

    return 0;
}
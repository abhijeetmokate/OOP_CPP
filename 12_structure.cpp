/*
structure:
1.it is a collection of dissimilar elements.
2.it is a way to group variables.
3.used to create the data type.


#in c it is compulsory to write the struct keyword while declaring the variable
 whereas in c++ it is optional  e.g. struct book b1;

# All the members of structure are by default public

*/

#include<iostream>
using namespace std;

struct book{

    //private:  // we cant access the bookid from outside the structure body
    int bookid;
    public:
    char title[20];
    float price;

    void input() // in c++ structure can contain the member function
    {
        cout<<"Enter Book title, Bookid, book price\n";
        cin>>title>>bookid>>price;
    }
};

book input();
void display(book b);

book input()
{
    book b;
    cout<<"Enter Book title, Bookid, book price\n";
    cin>>b.title>>b.bookid>>b.price;
    return b;
}

void display(book b)
{
    cout<<"Book Title : "<<b.title<<endl;
    cout<<"Book ID : "<<b.bookid<<endl;
    cout<<"Book Price : "<<b.price<<endl;
}

int main()
{
    struct book b1;  // struct keyword is optional in c++

    b1.input();   //in this case the the b1 is the caller object
    display(b1); 



}


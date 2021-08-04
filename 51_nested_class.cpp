/*

Nested class:

    * class inside class is  called nested class.
    * A nested class is a member and as such has the same access rights as any other member.
    * the members of an enclosing class have no special access to members of a nested class the usual access rules shall be obeyed.

*/

#include<iostream>
#include<cstring>
using namespace std;

class student{

    private:
    int rollno;
    char name[30];

    class address{
        private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[10];

        public:
        void setAddress(int hn, char *s,char* c, char* st, char* p){
            houseno = hn;
            strcpy(street, s);
            strcpy(city, c);
            strcpy(state, st);
            strcpy(pincode, p);
            
        }

        // nested class can access  
        // private members of Enclosing class 
        void fun(student *p)
        {
            cout<<p->name;
        }

                      

        void showAddress()
        {
            cout<<houseno<<", "<<street<<", "<<city<<", "<<state<<"-"<<pincode;
        }

        

    };

    address student_address;

    public:
    
    void set_rollno(int n)
    {
        rollno = n;
    }

    void set_name(char* nm){
        strcpy(name, nm);
    }

    void set_address(int hn, char *s,char* c, char* st, char* p)
    {
        student_address.setAddress(hn, s, c, st, p);
    }

    void showData()
    {
        cout<<"=========================Student Information========================="<<endl;
        cout<<"Roll No. = "<<rollno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Address = ";
        student_address.showAddress();

        //student_address.fun(this);

    }

};


int main()
{
    char name[20] = "Abhijeet";
    char street[20] = "MG road";
    char city[20] = "Mumbai";
    char state[20] = "Maharashtra";
    char pin[10] = "400121";

    student s1;
    s1.set_rollno(84);
    s1.set_name(name);
    s1.set_address(98,street,city,state,pin);

    s1.showData();



   // student::address obj; // to create the object of the nested address class if it is public

    

    return 0;
}
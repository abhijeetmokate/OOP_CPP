#include<iostream>
using namespace std;


class A{
	//int 
};


int main()
{
	const int VALUE = 10; // constant int and cannot change its value
						// need to initialize during delaration only otherwise error 

	//With pointers
	
	int b = 20;
	int *a = new int;
	*a = 30;
	a= (int*) &VALUE;
	*a = 60;
	cout<<VALUE;

	

	const int  v1 = 10;
	int v2 = 20;
	const int *p = &v1; // to point to the const variable it is necessary that pointer should be const
	p = &v2; // const pointer can also point to  the non const variable

	
	const int v3 = 30;
	int v4 = 40;
	int const *p = &v3; // same as  ==> const int *p  // const is before the * hence same as above
	p = &v4; // 


	int v5 = 50;
	int * const ptr = &v5; // const is after * | means the pointer variable is constant |we can not assign new address to p
	//ptr = &v5; // error 
	*ptr = 60; // we can change the value at location pointed by the ptr



	const int v6 = 60;
	const int* const ptr1 = &v6;// we cant change the content at the location pointed by ptr1 and also cant change the address in ptr1
	// ptr1 = &v5; // as pointer is constant
	// *ptr1 = 80; // as pointer pointing to the variabel is constant
	int const * const ptr2 = &v6; // same as above ptr1

	const int const *ptr3;


	/*
	1) const int *ptr;
	2)int const *ptr;
	3)const int const *ptr;
	4)int *const ptr;
	5)int const * const ptr;
	6)const int * const ptr;
	*/



















}

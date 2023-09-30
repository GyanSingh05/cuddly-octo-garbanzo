#include<iostream>
using namespace std;
int main()
{

int a=10;

int *aptr=&a;

//aptr++; //if i do this it moves to the next memory location.
// if before it was aptr=2000 , 
//now it will be 2000 + 4 =2004 bcoz an int data takes 4 bytes of memory

*aptr = *aptr+2;
cout<<*aptr;


   return 0;
}
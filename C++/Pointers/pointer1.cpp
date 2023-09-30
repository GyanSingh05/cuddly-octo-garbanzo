#include<iostream>
using namespace std;
int main()
{

int thevalue=10;

int *aptr;    // datatype*pointername // creating a blank pointer
aptr = &thevalue; // assigning the pointer /// & gives the address of a particular data

cout<<*aptr<<endl;//dereferencing the pointer-- it means that the pointer is deferencing itself and is providing the valuse it is pointing at

// now we will learn using different pointer

*aptr=70;
cout<<*aptr;
   return 0;
}
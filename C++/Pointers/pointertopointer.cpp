#include<iostream>
using namespace std;
int main()
{

int a=10;//a value defined

int *pointer1;// declaring a blank pointer

pointer1=&a;//   pointer pointed towards a

int **masterptr; // blank master pointer declared

masterptr=&pointer1; // master pointer pointed towards the first pointer 


// now checking the pointers

cout<<masterptr<<endl; // no dereferencing 
cout<<*masterptr<<endl; //dereferenced once 
cout<<**masterptr<<endl;// dreferenced twice

//works clean 









   return 0;
} 
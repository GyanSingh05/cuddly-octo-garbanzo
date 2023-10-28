#include<iostream>
using namespace std;
int main()
{


   int a=10;

   int *aptr=&a;
   int**j=&aptr;

   int &bptr=a;

   cout<<*aptr<<endl;
   cout<<bptr<<endl;
cout<<j<<endl;

cout<<endl;
cout<<j<<endl<<*j<<endl;
cout<<**j<<endl;









   return 0;
}
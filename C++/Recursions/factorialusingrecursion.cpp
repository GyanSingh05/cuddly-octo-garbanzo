#include<iostream>
using namespace std;
unsigned long int factorial(int n){
    if( n==1){
        return 1;
    }
     int premultiple=factorial(n-1);
    return n*premultiple;
}
int main()
{

int n;
cin>>n;

 cout<<factorial(n);

unsigned long int k=1;

for(int i=1;i<=n;i++){

k=(k*i);



}

cout<<endl<<k;

   return 0;
}
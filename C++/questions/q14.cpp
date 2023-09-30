//find factorial using recursion
#include<iostream>
using namespace std;
void recursion(unsigned long long int n,unsigned long long int current){

    if(n==0){
        cout<<"the factorial for the provided number is"<<endl<<"> ";
        cout<<current;
        return;
    }

    recursion(n-1,current*n);


}


int main()
{
    cout<<"Enter the number to find the Factorial"<<endl<<"> ";
int n;
cin>>n;
recursion(n,1);




   return 0;
}
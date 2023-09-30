#include<iostream>
using namespace std;

void recursion(int x,int a,int b, int* counter){
    cout<<"another iteration"<<endl;
    if((a*a)+(b*b)>x){
        return;
    }
    
    for(int i=1;i<=x;i++){
    
       recursion(x,a,b+i,counter);
    } 
    
    recursion(x,a+1,b,counter);
    
    
    
}

int main()
{



    int x;
    cin >> x;

    int counter=0;

    recursion(x,1,1, &counter);

    cout<< counter;


   return 0;
}
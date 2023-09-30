#include<iostream>
using namespace std;

void factorial ( unsigned __int64 i, int n){
    
    if(n==0){
        cout<<i;
        return;
    }

    factorial(i*n,n-1);

}
int main(){
    
    
    int n;
    cin>>n;
    
    
    factorial(1,n);
    
    
    
    
    return 0;
}
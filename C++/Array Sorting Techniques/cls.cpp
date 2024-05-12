#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b , int c, int d){
    
    int max=a;
    
    if (a>b){
        max=a;
    }
    else{
        max=b;
    }
     if(max<c){
         max=c;
     }
     if(max<d){
         
         max=d;
         
     }
     return max;
}

int main(){
    
    
    
    
    
    int a,b,c,d;
    
    cin>>a>>b>>c>>d;
    
    cout<<max(a,b,c,d);
    
    
    
    
    return 0;
}
#include<iostream>
using namespace std;

void fuck(int* a, int* b){
   
    int tits= *a+*b;
    
    int ass =*a-*b;
    if(ass<0){
        ass=(ass*(-1));
        
    
    }
    
    cout<< tits << endl << ass;
}

int main(){
    
    int a , b;
    cin>> a >> b ;
    
    fuck(&a,&b);
    
    
    
    
    
    
    return 0;
}
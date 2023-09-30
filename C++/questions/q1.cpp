#include<iostream>
using namespace std;

int main(){
    
   int sum=0; 
    int first;
    int last;
    for (int i=1; i<=5; i++) {
        
        if(i==1){
            cin>>first;
        }
        else if (i==5) {
            cin>>last;
        }
        
       else{ int k;
        
        cin>>k;
        
        sum+=k;
        }
    }

 
    
    cout<<sum+first<<endl<<sum+last;
    
    
    
    
    
    
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    
    
    int n;
    cin>>n;
    
    for (int i=1; i<=n; i++) {
        int k;
        cin>>k;
        

        if(k%5>=3 && k>=38){
         cout<<5-k%5+k<<endl;
        }
        else{
          cout<<k<<endl;
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
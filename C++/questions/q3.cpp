#include<iostream>
using namespace std;

int main(){
    
    
    
    int a , b , x , y;
    cin >> a >> b >> x >> y ;
    
    if (y>b) {
        cout<<"NO";
        return 0;
    }

    else if (b==y)
    {
        cout<<"NO";
    }
    
    
    else{
        
        int j=a;
        int k=x;
        
        for (int i=1; i<999999999; i++) {
             j+=b;
             k+=y;
             
             if (j==k) {
                cout<<"YES";
                break;
             }
             
             else if (j>k) {
                cout<<"NO";
                break;
             }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    return 0;
    
}
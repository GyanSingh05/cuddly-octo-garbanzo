#include<iostream>
using namespace std;
void primesieve(int n){
   
    int arr[100]={0};

        for(int i=2;i<=n;i++){
          
        
         if(arr[i]==0){
                for(int j=i*i;j<=n;j+=i){
            
                 arr[j]=1;
            
            
            
                }
    
             }
    
        }

    for(int i=2;i<n;i++){
    
      if(arr[i]==0){
        cout<<i<<" ";
      }
    
    
    
    }

}
int main()
{

    // to find all the prime number till n 

    int n;
    cin>>n;

    primesieve(n);


   return 0;
}
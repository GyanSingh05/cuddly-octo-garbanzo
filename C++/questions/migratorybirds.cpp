#include<iostream>
using namespace std;
int main()
{


   unsigned long long int n ;
   cin >> n ;

    unsigned long long int type[6]={0,0,0,0,0,0};

   for(unsigned long long int i=1;i<=n;i++){
   
        int a;
        cin>> a;
       
        type[a]=type[a]+1;
        
   
   
   }

  
    int sizecheck=0;
    int main=0;
    for(int i=1;i<=5;i++){
       if(type[i]==main){
        
         continue;
        }

     if( type[i]>sizecheck){
       
        sizecheck = type[i];
        main=i;
      
      
      }
      
    
    
    
    }
   
   cout << main;

   return 0;
}
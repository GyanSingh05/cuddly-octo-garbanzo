//to check if an element is present
#include<iostream>
using namespace std;

bool founder(int arr[],int n,int key){

   
     if(n==0){
   
        return false;


     }
    
    else if(arr[0]==key){
        
        return 1;
    }

     else{
        founder(arr+1,n-1,key);
        
     }



    
}
int main()
{


int n;
cin>>n;

int arr[n];

for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}


int key;
cin>>key;


cout<<founder(arr, n, key);

   return 0;
}
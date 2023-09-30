#include<iostream>
using namespace std;



int  finder(int arr[],int n,int key){
if (n==0){
    return 0;
}
if(arr[0]==key){
    return 1;
}

else{
    finder(arr+1,n-1,key);
}




    
}


int main()
{
//linear search using recursion

int n;
cin >> n;

int arr[n];



for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}




int key ;
cin >> key ;


cout<<finder(arr,n,key);

   return 0;
}
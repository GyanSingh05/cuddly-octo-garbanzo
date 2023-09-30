// check if an array is sorted or not 
#include<iostream>
using namespace std;
bool checker(int arr[],int n){
   if (n==0){
    return true;
   }
   if (arr[1]<arr[0]){
    return false;
   }
   else{
       checker(arr+1,n-1);
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
cout<<checker(arr,n);


   return 0;
}
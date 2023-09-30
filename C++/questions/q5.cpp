#include<iostream>
using namespace std;


int add( int arr[] , int n){

   if (n==0){
      return 0;
   }

    int sum= arr[0] + add(arr+1,n-1);

     return sum;


}




int main()
{

int arr[5];
int n=5;
for(int i=0;i<5;i++){

cin>>arr[i];



}



cout<<add(arr,n);

   return 0;
}
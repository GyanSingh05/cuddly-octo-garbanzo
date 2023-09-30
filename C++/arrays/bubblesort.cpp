#include<iostream>
using namespace std;
int main()
{

int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){

cin>>arr[i];



}

int counter=1;//this indicated that this number of elements are at the rightful last place cause they are the longest;
 
while(counter<n){//we will do this until all the n elments reach there reightful place;

for(int i=0;i<n-counter;i++){//put the biggest element at the end and then do it again for the smaller array 

if(arr[i+1]<arr[i]){
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
} 


}

counter++;

}



for(int i=0;i<n;i++){

cout<<arr[i]<<endl;



}

   return 0;
}
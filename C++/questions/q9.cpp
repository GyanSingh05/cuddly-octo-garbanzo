//binary search using recursions
#include<iostream>
using namespace std;

bool founder(int arr[],int s, int e, int key){

if (s>e){
    return false;
}

int mid=(s+e)/2;

if(arr[mid]==key){
    return true;
}

else if (arr[mid]<key){
    founder(arr,mid+1,e,key);
}

else if (arr[mid]>key){
    founder(arr,s, mid-1,key);
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



cout<<founder(arr, 0, n, key);




   return 0;
}
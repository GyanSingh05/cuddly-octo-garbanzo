#include<iostream>
using namespace std;
void recursion(int n, int arr[]){

    if(n==1){

        cout<<"yes it is ";
    return;

    }
    if(arr[0]>arr[1]){
        cout<<"it ain't";
        return;
    }
    
    else{
        recursion(n-1,arr+1);
    }
    




    
}
int main()
{

int n;
cin>> n;

int arr[n];
for (int i = 0; i < n; i++)
{
    cin>> arr[i];
}

recursion(n, arr);




   return 0;
}
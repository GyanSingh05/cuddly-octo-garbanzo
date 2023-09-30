#include<iostream>
using namespace std;
void merge(){

}
void sort(){

}
int main()
{

int n;
cin>>n;

int* arr=new int[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}

delete[] arr;


   return 0;
}
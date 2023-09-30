#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

int arr[5]={8,2,7,9,6};
int brr[2]={10,3};
cout<<max(*max_element(arr, arr + 5),*max_element(brr, brr + 2));



   return 0;
}
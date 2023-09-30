#include<iostream>
using namespace std;
int main()
{


int n;
cin>>n;

int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int arra[102]={0};


for (int i = 0; i < n; i++)
{
    int current=arr[i];
    arra[current]++;
}
   int pairs=0;
for (int i = 0; i < 102; i++)
{
    if(arra[i]==0 || arra[i]>100){
        continue;
    }
    else{
        pairs=pairs+(arra[i]/2);
    }
    
}

cout<< pairs;


   return 0;
}
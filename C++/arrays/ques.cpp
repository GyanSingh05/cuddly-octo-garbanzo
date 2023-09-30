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

int s;
cin>>s;




int ini=0;
int fin=1;
int currsum=0;



for(int k=0;k<n;k++){

if(currsum>s){
    fin=k;
    break;
    
}

currsum=+arr[k];




}

for(int j=1;j<=n;j++){
    
if(currsum<=s){
    break;
    ini=j;
}

currsum=+arr[j];


}

cout<<ini<<endl<<fin<<endl<<currsum;

   return 0;
}
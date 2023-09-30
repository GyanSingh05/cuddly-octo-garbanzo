#include<iostream>
#include<limits.h>
using namespace std;
int main()
{

unsigned long long int sum=0;
unsigned long long int first=999999999;
unsigned long long int last=0;

for(int i=1;i<=5;i++){

unsigned long long int k;
cin>>k;

sum=sum+k;

if(k<first){
    first=k;
    
}

if(k>last){
 last=k;   
}

}
//cout<<sum<<endl<<first<<endl<<last;
cout<<sum-last<<" " <<sum-first;

return 0;

}
#include<iostream>
using namespace std;
int ider=0;
int power(int num, int pow){
    int ret=1;
    for(int i=1;i<=pow;i++){
    
        ret*=num;
    
    }
    return ret;
}
void recurse(int n , int k , int sum,  int idx, int itr){
        sum=sum+power(itr,k);
        if(sum==n){
              ider++;
              recurse(n, k, 0, idx+1, itr)
        }
        if(sum>n){
            i
        }
        itr++;
        recursion(n, k , sum,idx,itr);
        return;
}
int main()
{


   int n;
   int k;
   cin>> n >> k ;

   recurse(n, k,0);


   return 0;
}
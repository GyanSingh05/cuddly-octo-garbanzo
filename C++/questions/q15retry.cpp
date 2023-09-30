#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool check( int num , int* a, int* b, int n, int m){
    
     

    
    bool flag=true;

    for(int i=0;i<n;i++){
    
        
        if(!(num%(*(a+i))==0)){
            flag = false;
           
        }

     
    
    }

    for(int i=0;i<m;i++){
    
        if(!((*(b+i)%num)==0)){
            flag = false;
           
        }

       
    
    
    
    }
    
    if(flag){
        return true;
    }
    
return false;
}
int main()
{

 int counter=0;

    int n,m;
    cin >> n >> m;
    
    int a_arr[n];
    int b_arr[m];


    
    for(int i=0;i<n;i++){
    
    
        cin>>a_arr[i];
    
    
    }

    for(int i=0;i<m;i++){
    
    
        cin>>b_arr[i];
    
    
    }

    int itr;
    itr = max(*max_element(a_arr, a_arr + n),*max_element(b_arr, b_arr + m));
    

    for(int i=1;i<=itr;i++){
     
    if(check(i,a_arr,b_arr,n,m)){
        counter++;
    
    }
    
    
    }
    cout<<counter;

   return 0;
} 
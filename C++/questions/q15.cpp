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

/*There will be two arrays of integers. Determine all integers that satisfy the following two conditions:

The elements of the first array are all factors of the integer being considered
The integer being considered is a factor of all elements of the second array
These numbers are referred to as being between the two arrays. Determine how many such numbers exist.

Example


There are two numbers between the arrays:  and .
, ,  and  for the first value.
,  and ,  for the second value. Return .

Function Description

Complete the getTotalX function in the editor below. It should return the number of integers that are betwen the sets.

getTotalX has the following parameter(s):

int a[n]: an array of integers
int b[m]: an array of integers
Returns

int: the number of integers that are between the sets
Input Format

The first line contains two space-separated integers,  and , the number of elements in arrays  and .
The second line contains  distinct space-separated integers  where .
The third line contains  distinct space-separated integers  where .

Constraints

*/
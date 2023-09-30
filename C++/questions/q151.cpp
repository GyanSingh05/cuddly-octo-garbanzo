#include<iostream>
using namespace std;
 bool check1(int n, int* ist,int* sec, int j, int k ){
    
    bool flag=true;

    for(int i=0;i<j;i++){
        cout<<"check ist for "<<n<<" "<<(n%(*(ist+i))==0)<<endl;
        if( !(n%(*(ist+i))==0) ){
            
            flag=false;
        }
    
      
    
    }
    
    for(int i=0;i<k;i++){
     cout<<"check sec for "<<n<<" "<<((*(sec+i))%n==0)<<endl;
       if( !((*(sec+i))%n==0) ){
            flag=false;
        }
    
      
    
    }

    if(flag){
       cout<< n<< endl;
        return true;
    }
    
    
   return false;
}



int main()
{

    int counter=0;

    int j,k;
    cin >> j >> k;
    
    int ist[j];
    int sec[k];


    
    for(int i=0;i<j;i++){
    
    
        cin>>ist[i];
    
    
    }
    for(int i=1;i<k;i++){
    
    
        cin>>sec[i];
    
    
    }

    for(int i=12;i<14;i++){
    
        bool flag=true;

       if( !check1(i, ist, sec, j, k) ){
           flag=false;
       }
    
      
       
       if(flag){
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
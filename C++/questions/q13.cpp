#include<iostream>
using namespace std;

int main(){

    
    
    int h1, h2;
    cin>>h1>>h2;
    
    int t1,t2;
    cin>>t1>>t2;

    
  

    if(!(t1<h1<h2<t2)){
       cout<<"nope";
        return 0;
    }

    int apples, oranges;
    cin>>apples>>oranges;
    
    int appn=0;
    int orrn=0;
    
    for (int i=1; i<=apples; i++) {
          
          int k;
          cin>>k;
          
         int pos=k+t1;
         

         if(pos>=h1 && pos<=h2){
            appn++;
         }
    }
    
    for (int i=1; i<=oranges; i++) {
        
          int k;
          cin>>k;
          
          int pos=k+t2;
          
      
         if(pos>=h1 && pos<=h2){
            orrn++;
         }
    }
    
    
    cout<<appn<<endl<<orrn;
    
    
    
    
    
    
    return 0;
    
}
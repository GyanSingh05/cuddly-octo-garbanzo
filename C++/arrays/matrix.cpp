#include<iostream>
using namespace std;
int main()
{

int n,l,m;
cin>>n>>l>>m;


int m1[n][l];

for(int i=0;i<n;i++){

    for(int j=0;j<l;j++){

   
      cin>>m1[i][j];


     }



}



int m2[l][m];

for(int i=0;i<l;i++){

   for(int j=0;j<m;j++){
   
   
      cin>>m2[i][j];
   
   
   }



}



int multi[n][m];






    for(int i=0;i<n;i++){//gets rows of m1 for multiplication



        for(int j=0;j<m;j++){//gets coulmns of m2 for multiplication
 
             int val=0;


            for(int k=0;k<l;k++){//add 'em all up and send the results to multi
   
   
                val=val+m1[i][k]*m2[k][j];


   
   
            }
  
          multi[i][j]=val;
         
  
        }



    }





for(int i=0;i<n;i++){

for(int j=0;j<m;j++){

   cout<<multi[i][j]<<" ";



}

cout<<endl;

}



































   return 0;
}
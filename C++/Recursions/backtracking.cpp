//rat in a maze problem . solve using backtracking
#include<iostream>
using namespace std;
bool possible(int** arr, int x, int y, int n  ){

           if(x<n && y<n  &&  arr[x][y]==1){
            return true;

           }
           return false;

}
bool ratster(int** arr, int x, int y, int n , int** solarray){
    
    if (x==n && y==n){
      return true;
    }
    if(possible(arr, x, y, n)){
        solarray[x][y]=1;
        
        if(possible(arr, x+1, y, n)){
          return true;
        }
        if(possible(arr, x, y+1 , n)){

          return true;
        }
        solarray[x][y]=0;
        return false;
    }

}
int main()
{

int n;
cin>>n;


int ** arr=new int*[n];

for(int i=0;i<=n;i++){

  arr[i]= new int [n];


}

   return 0;
}

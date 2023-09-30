#include<iostream>
using namespace std;
bool is_attacked(int board[8][8], int i, int j){

    bool flag=false;


    for (int k = 0; k < 8; k++)// to check for rows and columns
    {
        if(board[k][j]==1 || board[i][k]==1){
            cout<<"row attack";
            flag=true;
            return flag;
        }
    }

    for (int p = 0; p < 8; p++)//to check for diagonals;
    {
        for (int q = 0; q < 8; q++)
        {
            if((p+q)==(i+j)){
                if(board[p][q]==1){
                    cout<<"column attack";
                    flag= true;
                    return flag;
                }
            }
        }
    }
    return flag;
}
int main()
{


    int board[8][8];
    
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin>>board[i][j];
        }
        
    }
    
  cout<<is_attacked(board,7,7);


   return 0;
}
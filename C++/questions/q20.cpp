#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector <int> ranked;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        ranked.push_back(a);
    }
    
    vector <int> scores;
    int m;
    cin >> m;

    for (int i = 0; i <m; i++)
    {
        int a;
        cin>>a;
        scores.push_back(a);
    }

    int rank[n]={1};
    int counter=ranked[0];
    int ranker=1;
    for (int i = 1; i < n; i++)
    {
        if(ranked[i]==ranked[i-1]){

            rank[i]=ranker;

        }
        else if(ranked[i]<ranked[i-1]){

            ranker++;
            rank[i]=ranker;

        }
    }
    


// for (int i = 0; i < n; i++)
//     {
//         cout<<ranked[i]<<" ";
//     }
//         cout<<endl;
//      for (int i = 0; i <m; i++)
//     {
//         cout<<scores[i]<<" ";
//     }


 for (int i = 0; i < n; i++)
 {
    cout<< rank[i]<<" ";
 }

 //////////////////////////////////////////////
 int currank;
 int passed;
 int passeditr;
  for (int i = 0; i < m; i++)
  {
    
    for (int j = 0; j < m; j++)
    {

        if(ranked[m-j]==score[i]){
            currank=rank[m-i];
        }
        if(ranked[m-j]>score[i]){

            break;
            
        }
    }
        
  }
  
 

   return 0;
}
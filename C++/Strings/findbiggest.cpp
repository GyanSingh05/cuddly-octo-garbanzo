#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{


    string str="1234567890";

    
   cin >> str ;

    int big=0;

    for(int i=0;i<str.length();i++){
    
      string st ;
      st = str[i];
    
        if(stoi(st)>big){
            big=stoi(st);
        }
    
    }

   cout<<big;
   return 0;
}
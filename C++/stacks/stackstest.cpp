#include<iostream>
#include<stack>
#include<string>
using namespace std;
void reverse(string &st){

    stack<string> sta;

    string str=st;
    
    for(int i=0;i<str.length();i++){

        string word="";

        while(str[i]!=' ' && i<str.length()){
            word=word+str[i];
            i++;
        }

        sta.push(word);

        word="";




    }

    while(!sta.empty()){
        cout<<sta.top()<<endl;
        sta.pop();
    }
}
int main()
{


    
    string st="my name is gyan singh";
    
    reverse(st);
    
    



   return 0;
}
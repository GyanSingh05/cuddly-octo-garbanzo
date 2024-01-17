#include<iostream>
#include<string>
#include<stack>
#include<cctype>

using namespace std;

int evaluate(string s1){

    int op1, op2;

    stack<int> stk;

    int ans=10;

    for(int i=s1.length();i>=0;i--){

        char curr=s1[i];

        if(isdigit(curr)){
            stk.push(curr-'0');
        }

        else if (curr=='+'){

            op1=stk.top();
            stk.pop();
            op2=stk.top();
            stk.pop();
            stk.push(op1+op2);
        }

        else if (curr=='*'){
            op1=stk.top();
            stk.pop();
            op2=stk.top();
            stk.pop();
            stk.push(op1*op2);

        }

        else if(curr=='/'){
            op1=stk.top();
            stk.pop();
            op2=stk.top();
            stk.pop();
            stk.push(op1/op2);
        }        
        
        else if(curr=='-'){
            op1=stk.top();
            stk.pop();
            op2=stk.top();
            stk.pop();
            stk.push(op1-op2);
        }

        else if(curr=='^'){
            op1=stk.top();
            stk.pop();
            op2=stk.top();
            stk.pop();
            stk.push(op1^op2);
        }




    }

    if(stk.empty()){
        return -1;
    }
   
    return stk.top();
}

int main()
{

    // to solve previx evaluations, go from post to pre


    string s1="-^425";

    // cout<<s1;
 
    
 
 
    cout<<evaluate(s1);





   return 0;
}
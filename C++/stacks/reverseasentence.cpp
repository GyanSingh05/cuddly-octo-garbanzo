#include<iostream>
#include<string>
#include<stack>

using namespace std;
void reverse(string str){

    stack<string> st;
    
    string sam;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]!=' '){
            sam.push_back(str[i]);
        }
        else{
            st.push(sam);
            sam="";
        }
    }

    if (!sam.empty()) {
        st.push(sam);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return;

}

int main()
{

    string str = "@my name is gyan singh h";


    
    reverse(str);





   return 0;
}
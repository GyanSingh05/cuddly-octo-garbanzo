#include<iostream>
int const n = 100;
class stack{

    public:

    int *arr;
    int top;

    stack(){

        arr = new int[n];
        top = -1;

    }

    void push(int n){
        top++;
        arr[top]=n;
    }

    void pop(){

        arr[top]=0;
        top--;

    }

    int Top(){

        return arr[top];;

    }

    bool empty(){
        return top==-1;
    }


};
using namespace std;
int main()
{

stack st;
st.push(10);
st.push(20);
st.push(30);

cout<<st.Top()<<endl;
st.pop();

cout<<st.Top()<<endl;
st.pop();

cout<<st.Top();





   return 0;
}
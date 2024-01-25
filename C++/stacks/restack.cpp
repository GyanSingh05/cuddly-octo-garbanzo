#include<iostream>
using namespace std;
int const n = 100;
// push pop top empty//
class stack{
    public:

    int *arr;
    int top=0;

    stack(){
        arr = new int[n];
        top = -1 ;
    }
    void push(int a){
        top++;
        arr[top]=a;
    }
    void pop(){
        arr[top]=0;
        top--;
    }
    int Top(){
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main()
{


    stack st;
    st.push(11);
    cout<<st.Top();
    




   return 0;
}
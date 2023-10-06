#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;
    }

};
int main()
{

    node first(10);
    cout<<first.data;
    cout<<endl;
    cout<<first.next; 




   return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

class node{
    // this only creates nodes which are not connected to any other // >new change;

public:
int data;
node* nextptr;

node(int val){

    data=val;
    nextptr=NULL;
   
    }
};
void insertnd(node* &head,int val){                // only this help to join two nodes

    node* n= new node(val);

    if(head==NULL){

        head=n;
        return;
    }

    node* temp=head;

    while (temp->nextptr!=NULL){
        temp=temp->nextptr;
    }
    temp->nextptr=n;



}
void display(node* head){

    node* temp= head;
    while(temp!=NULL){

        cout<<temp->data<<endl;
        temp=temp->nextptr;

    }
}

int main(){

    // create a linked list for 1 2 3 4 6 7 8 9 10 and then inset 5 //

    node* head=NULL;
    insertnd(head,1);
    insertnd(head,2);
    insertnd(head, 3);
    insertnd(head,4);

    cout<<"hell;


    display(head);

    return 0;
}
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
void insert(node* &head,int val){
    node* n = new node(val);
    node*temp=head;
    if(head==NULL){

        head=n;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=n;
}
void display(node*head){
    node*temp = head;
    while(temp!=NULL){
        

        cout<<temp->data;
    
        temp=temp->next;
        cout<<"->";
    }
    cout<<"NULL";
    return;
}
int main()
{

    node *head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    display(head);
    // cout<<first.data;
    // cout<<endl;
    // cout<<first.next; 




   return 0;
}
#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};
void insertathead(node*&head, int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}
void insertatend(node* &head, int val){
    node*n = new node(val);

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next; 
    }

    temp->next=n;

}
void display(node* head){
    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next!=NULL){
            cout<<"->";
        }
        temp=temp->next;

    }
    cout<<endl;
}
int main()
{

node* head =new node(0);

insertatend(head,1);
insertatend(head,2);
insertatend(head,3);

display(head);

insertathead(head,-1);

display(head);


   return 0;
}
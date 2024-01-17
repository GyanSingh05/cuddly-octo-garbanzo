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

void insertatend(node*&head,int val){
    node*temp=head;

    node*n= new node(val);

    if(temp==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

node* reverse(node*&head,int k){

    int counter=0;
    node*previous=NULL;
    node*current=head;
    node*nexto;

   while(counter<k && current!=NULL ){
        nexto=current->next;
        current->next=previous;
        
        previous=current;
        current=nexto;
        counter++;
   }

   if(nexto!=NULL){
   head->next=reverse(nexto,k);
   }
   

   return previous;
}

void display(node*head){

    node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{

    // we are reversing a linked list
    node*head= NULL;

    insertatend(head,1);    
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);
    insertatend(head,6);

    display(head);

    node *newhead=reverse(head, 2);

    
    cout<<endl;

    display(newhead);

   return 0;
}
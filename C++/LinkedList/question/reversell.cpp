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

void reverse(node*&head){

    node*previous=NULL;
    node*current=head;
    node*nexto=current->next;

    while(nexto!=NULL){
        nexto=current->next;
        current->next=previous;
        
        previous=current;
        current=nexto;
        

    }

    cout<<"data in previous"<<previous->data;
    cout<<endl<<endl<<endl<<current<<endl<<nexto;
    head=previous;


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

    display(head);

    reverse(head);
    cout<<endl;

    display(head);

   return 0;
}
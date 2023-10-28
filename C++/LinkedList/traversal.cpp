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
void insertatend(node*&head, int val){
    node*n= new  node(val);
    node*temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;

}
void display(node*head){

    node*temp=head;
    while(temp!=NULL){

        cout<<temp->data<<"==>";
        temp=temp->next;

    }
    cout<<"NULL";
}
void traversal(node*head){
    node*temp=head;
    int i=0;
    
    while(temp->next!=NULL){
        
        cout<<temp->data<<" is the "<<i<<"th index in this linked list"<<endl;
        i++;

        
        temp=temp->next;
    }

}

int main()
{
    node*head = new node(0);

    insertatend(head,1);

    insertatend(head,2);

    insertatend(head,3);

    insertatend(head,4);

    insertatend(head,5);

    insertatend(head,6);

    display(head);
    cout<<endl;
    traversal(head);

   return 0;
}
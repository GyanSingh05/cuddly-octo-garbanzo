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




void reversek(node*&head, int k){
   
    node* previous=NULL;
    node* current=head;
    node* nexto=current->next;

    while(current!=NULL){

        ;

    }




}





int main()
{


// reversing every k nodes in a linked list 

   node*head= new node(2);
   insertatend(head,1);
   insertatend(head,4);
   insertatend(head,3);
   insertatend(head,6);
   insertatend(head,5);
   display(head);
   cout<<endl;
   display(head);

   return 0;
}





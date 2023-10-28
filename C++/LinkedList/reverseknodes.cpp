#include<iostream>
using namespace std;
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
void reverse(node*&head){
   





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
   reverse(head);
   display(head);

   return 0;
}





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

void insertathead(node*& head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        n->next = n; // Point to itself for the first node
    } else {
        node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
    head = n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
        cout<<" "; 
    }

}
int main()
{

//now circular linked list

   node*head=new node(1);
   insertathead(head,0);
   display(head);


   return 0;
}
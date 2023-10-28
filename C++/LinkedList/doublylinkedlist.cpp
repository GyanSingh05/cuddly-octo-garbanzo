#include<iostream>
using namespace std;
class node{
         public:

         int data;
         node*prev;
         node*next;

         node(int val){
            data=val;
            prev=NULL;
            next=NULL;
         }


};
void insertatend(node*&head, int val){
   node*n= new node(val);
   node*temp=head;

   while(temp->next!=NULL){
      temp=temp->next;
      
   }
   n->prev=temp;
   temp->next=n;
   
}
void insertathead(node*&head, int val){
   node*n= new node(val);
   n->next=head;
   head->prev=n;
   head=n;
}
void display(node*&head){
   node*temp=head;
   while(temp!=NULL){
      cout<<temp->data<<endl;
      temp=temp->next;
   }
}
void displayreverse(node*&head){
      node*temp=head;
      while(temp->next!=NULL){
         temp = temp->next;
      }
      node*tail=temp;
      while(tail!=NULL){
         cout<<tail->data<<endl;
         tail=tail->prev;
      }
}
void removeentry(node*&head, int a){

   int counter=1;
   node*del=head;
   while(counter<a){
       del=del->next;
       
       counter++;
   }
   node*prevo=del->prev;
   node*nexto=del->next;
   prevo->next=nexto;
   nexto->prev=prevo;
   delete del;
   del=NULL;


}
void insertat(node*&head, int pos, int val){
   node*n= new node(val);
   node*temp= head;
   int counter=1;
   while(counter<pos){
      temp=temp->next;
      counter++;

   }
   
   node*prevo=temp->prev;
   node*nexto=temp;
   n->prev=prevo;
   n->next=nexto;
   cout<<"inserted";
}
int main(){


// now make a doubly linked list
// make these happen:
//
// insert at head //
// insert at end //
// display //
// insert at a counter 
// delete particular counter //
// delete all node same as given data 


   node* head = new node(10);
   
   insertatend(head,200);
   insertatend(head,900);
   insertatend(head, 400);
   insertathead(head,1000);
   
   display(head);
   cout<<endl<<endl;
   
    
   
   
   



   insertat(head,2,15);
   display(head);
   cout<<endl<<endl;



   return 0;
}
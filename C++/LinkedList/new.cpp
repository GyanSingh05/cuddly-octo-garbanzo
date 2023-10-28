#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }


};
void insertatend(node* &head, int val){
    node*n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertathead(node* &head, int val){

    node*n = new node(val);
    //node*temp=head;
   
    n->next=head;
    head=n;
}
void insertat(node* head, int pos, int val){

    if(pos==1){
        insertathead(head, val);
        return;
    }
    int counter=0;
    node*temp=head;
     
    node*n = new node(val);
    while(counter<pos-1){
        temp=temp->next;
       
        if(temp->next==NULL){
            insertatend(head,val);
            return;
        }
        counter++;
    }


    node*nexter=temp->next;
    temp->next=n;
    n->next=nexter;


}
void removeevery(node*head,int a){     
    
                                                     //remove every matching // provide just a number
    
}
void removeentry(node*&head,int a){
    
    int counter=1;
    node*temp=head;
    while(counter<a-1){
        temp=temp->next;
        counter++;
    }                                                      //particular item  // provide an iterator

    node* del=temp->next;
    node*save=del->next;
    temp->next=save;
    delete del;
    del=NULL;
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

    node* head=NULL;

    

    insertatend(head, 1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,6);
    insertatend(head,5);
    insertatend(head,6);
    



    insertat(head, 1, 250);
    insertat(head, 8, 49);
    display(head);
    removeentry(head,3);
    cout<<endl;
    display(head);
   return 0;
}
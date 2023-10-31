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

void traverse(node*head){

    int counter=1;
    int flag=1;

    node*temp=head;

    while(temp->next!=NULL){
        counter++;
        temp=temp->next;
    }

    

    if(counter%2==0)counter=counter/2;
    else counter=counter/2 +1;
    temp=head;


    while(flag!=counter){
        temp=temp->next;
        flag++;
    }
    cout<<endl;

    cout<<temp->data;

    


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

    insertatend(head,10);
    insertatend(head,10);
    insertatend(head,10);
    insertatend(head,10);
    


    display(head);

    traverse(head);

   return 0;
}
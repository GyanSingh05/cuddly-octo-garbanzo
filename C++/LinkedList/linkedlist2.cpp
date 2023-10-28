#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* ptr;

    node(int val){
        data=val;
        ptr=NULL;

    }

    

};

void insert(node* &head, int val){
 
 node *n = new node(val);
 
    if(head==NULL){
        head=n;
        
        return;

    }


    node *temp = head;

    while(temp->ptr!=NULL){
        temp=temp->ptr;
    }

   

    temp->ptr=n;
    
}

void display_node(node* head){
    node*tempp=head;

    while(tempp!=NULL){
        cout<<tempp->data;
        tempp=tempp->ptr;
        cout<<endl;
        
    }
}

int main()
{


    node* head=NULL;
    insert(head,12);
    insert(head,234);
    insert(head,2345);

    display_node(head);

   return 0;
}

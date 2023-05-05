#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node(int val){
            data=val;
            next=NULL;
        }
};

void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertattail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void deleteathead(node* &head){
    node* temp=head;
    head=head->next;
    delete temp;
}

void deletion(node* &head, int val){
    node* temp=head;
    if(head==NULL)   return;
    if(head->next==NULL)    deleteathead(head);
    while(temp->next->data!=val)
        temp=temp->next;
    node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}

void display(node* &head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* nextptr;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    head=prev;
    return (head);
}
int main(){
    node* head=NULL;
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,1);
    insertattail(head,6);
    insertathead(head, 2);
    deletion(head,1);
    deleteathead(head);
    display(head);

    node *newhead= reverse(head);
    display(newhead);

    return 0;
}
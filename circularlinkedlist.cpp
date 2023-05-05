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
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertattail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void deleteathead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* del=head;
    temp->next=head->next;
    head=head->next;
    delete del;
}

void deletion(node* &head, int val){
    node* temp=head;
    if(head==NULL)   return;
    int count=1;
    if(val==1){
        deleteathead(head);
        return;
    }
    while(count!=val-1){
        temp=temp->next;
        count++;
    }
    node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}

void display(node* &head){
    node * temp=head;
    do{
        cout<<temp->data<<"  ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}


int main(){
    node* head1=NULL;
    insertattail(head1,3);
    insertattail(head1,4);
    insertattail(head1,5);
    insertattail(head1,6);
    insertathead(head1, 2);
    insertathead(head1, 1);
    display(head1);
    node *newhead=NULL;
    insertattail(newhead,11);
    insertattail(newhead,12);
    insertattail(newhead,13);
    insertattail(newhead,14);
    insertattail(newhead,15);
    display(newhead);
    deletion(head1,4);
    deleteathead(newhead);
    display(head1);
    display(newhead);
    return 0;
}
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
    return prev;
}

int length(node* &head){
    node* temp=head;
    int count=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

node* kappend(node* &head,int k){
    node* newhead;
    node* newtail;
    node* tail=head;
    int l=length(head);
    k=k%l;
    int count=0;
    while(tail->next!=NULL){
        if(count==l-k)
            newtail=tail;
        if(count==l-k+1)
            newhead=tail;
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
int main(){
    node* head=NULL;
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,1);
    insertattail(head,6);
    insertathead(head, 2);
    insertathead(head, 7);
    display(head);
    node *newhead=kappend(head,3);
    display(newhead);

    return 0;
}
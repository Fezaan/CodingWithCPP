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
node* revrec(node* &head){
    if(head==NULL || head->next==NULL)  
        return head;
    node* newhead=revrec(newhead->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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

node* reversek(node* &head, int k){
    node* prev=NULL;
    node* curr=head;
    node* nextptr;
    int count=0;
    while(curr!=NULL && count<k){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
        count++;
    }

    if(nextptr!=NULL)
        head->next=reversek(nextptr,k);
    return prev;
}
int main(){
    node* head=NULL;
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,1);
    insertattail(head,6);
    insertathead(head, 2);
    display(head);
    node* newhead2=reversek(head,2);
    display(newhead2);

    return 0;
}
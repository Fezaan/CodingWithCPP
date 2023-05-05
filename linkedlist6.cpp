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
void makecycle(node* &head,int pos){
    int count=1;
    node* temp=head;
    node* loop;
    while(temp->next!=NULL){
        if(count==pos)
            loop=temp;
        temp=temp->next;
        count++;
    }
    temp->next=loop;
}
void removecycle(node* &head){
    node* slow=head;
    node* fast=head;
    do{
        fast=fast->next->next;
        slow=slow->next;
    }while(fast!=slow);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

bool detectcycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        if(slow==fast)  return true;
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;
}

int main(){
    node* head=NULL;
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,1);
    insertattail(head,6);
    insertathead(head, 2);
    display(head);
    makecycle(head,3);
    if(detectcycle(head)){
        removecycle(head);
        display(head);
    }
    else{cout<<"Cycle not present."<<endl;}
    return 0;
}
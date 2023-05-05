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

int link(node* &head1,node* &head2){
    node* p1;
    node* p2;
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    if(l1>l2){
        d=l1-l2;
        p1=head1;
        p2=head2;
    }
    else{
        d=l2-l1;
        p1=head2;
        p2=head1;
    }
    while(d){
        p1=p1->next;
        if(p1==NULL)
            return -1;
        d--;
    }
    while(p1!=NULL && p2!=NULL){
        if(p1==p2)  return p1->data;
        p1=p1->next;
        p2=p2->next;
    }
    return -1;
}

void intersect(node* &head1,node* &head2,int pos){
    node* temp1=head1;
    while(pos){
        temp1=temp1->next;
        pos--;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

node* merge(node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummy=new node(-1);
    node* p3=dummy;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummy->next;
}

node* mergerec(node* &head1,node* &head2){
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergerec(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergerec(head1,head2->next);
    }
    return result;
}
void evenafterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(even->next!=NULL && odd->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next==NULL) even->next=NULL;
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
    evenafterodd(head1);
    display(head1);

    return 0;
}
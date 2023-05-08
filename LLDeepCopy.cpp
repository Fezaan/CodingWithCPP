/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *tmp=head;
        Node *front=head;
        while(tmp!=NULL){
            front=tmp->next;
            Node *copy=new Node(tmp->val);
            tmp->next=copy;
            copy->next=front;
            tmp=front;
        }
        tmp=head;
        while(tmp!=NULL){
            if(tmp->random!=NULL){
                tmp->next->random= tmp->random->next;
            }
            tmp=tmp->next->next;
        }
        tmp=head;
        Node *newHead=new Node(0);
        Node *copy=newHead;
        while(tmp!=NULL){
            front=tmp->next->next;
            copy->next=tmp->next;
            tmp->next=front;

            copy=copy->next;
            tmp=tmp->next;
        }
        return newHead->next;
    }
};
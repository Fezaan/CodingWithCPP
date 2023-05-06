/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| !head->next || k==0)  return head;
    int count=1;
    ListNode *tmp=head;
    while(tmp->next && ++count){
        tmp=tmp->next;
    }
    if(count==1)    return head;
    k=k%count;
    k=count-k;
    tmp->next=head;
    for(int i=0;i<k;i++){
        tmp=tmp->next;
    }
    head=tmp->next;
    tmp->next=NULL;
    return head;
    }
};
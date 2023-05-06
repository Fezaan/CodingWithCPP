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
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (k == 1 || head == NULL)
            return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        int count = 0;
        ListNode *pre = dummy;
        ListNode *curr = dummy;
        ListNode *nex = dummy;
        while (curr->next)
        {
            curr = curr->next;
            count++;
        }
        while (count >= k)
        {
            curr = pre->next;
            nex = curr->next;
            for (int j = 1; j < k; j++)
            {
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
            count -= k;
        }
        return dummy->next;
    }
};
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
    int maxlen = 105;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        int t = 0;
        while(l1||l2||t)
        {
            if(l1) t+=l1->val, l1 = l1->next;
            if(l2) t+=l2->val, l2 = l2->next;
            cur->next = new ListNode(t%10);
            cur = cur->next;
            t = t/10;
        }
        return dummy->next;
    }
};

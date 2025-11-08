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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* p = l1, *q = l2;
        ListNode* curr = dummy;
        int carry = 0;

        while(p!=nullptr || q!=nullptr){
            int x = (p!=nullptr) ? p->val : 0;
            int y = (q!=nullptr) ? q->val : 0;

            int sum = x + y + carry;
            carry = sum / 10;
            curr->next = new ListNode(sum%10);
            curr = curr -> next;

            if(p)  p = p-> next;
            if(q)  q = q->next;
        }

        if(carry > 0) curr -> next = new ListNode(carry);
        ListNode* res = dummy->next;
        delete dummy;
        return res;
    }
};
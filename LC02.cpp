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
        int carry = 0;
        ListNode *head = new ListNode(0);
        ListNode *t = head;   

        while(l1 or l2 or carry){
            int a = l1? l1->val : 0;
            int b = l2? l2->val : 0;
            int s = a + b + carry;
            carry = s / 10;
            t->next = new ListNode(s % 10);
            t = t->next;
            l1 = l1? l1->next : NULL;
            l2 = l2? l2->next : NULL;
        }

        return head->next;
    }
};

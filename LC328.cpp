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
    ListNode* oddEvenList(ListNode* head) {

        if(!head or !head->next)
            return head;
        
        ListNode *h1 = head->next, *i = head;
        ListNode *j = h1;

        while(i->next and j->next){
            i->next = j->next;
            if(i->next)
                i = i->next;
            j->next = i->next;
            if(j->next)
                j = j->next;
        }
        i->next = h1;

        return head;
    }
};

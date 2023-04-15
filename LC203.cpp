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
    ListNode* removeElements(ListNode* head, int val) {
        

        if(head == NULL){
            return head;
        }

        if(head->next == NULL){
            if(head->val == val)
                return NULL;
            return head;
        }

        while(head != NULL && head->val == val){
          head = head->next;
        }

        ListNode *curr = head;

        while(curr != NULL && curr->next != NULL){
            
            if(curr->next->val == val){
              ListNode *p = curr->next;
              curr->next = p->next;
              p->next = NULL;
              delete p;
            }
            else
                curr = curr->next;
        }

        return head;
    }
};

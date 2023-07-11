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
    int pairSum(ListNode* head) {
        stack <ListNode*> st;
        ListNode *t1 = head, *t2 = head;

        while(t2 and t2->next){
            st.push(t1);
            t1 = t1->next;
            t2 = t2->next->next;
        }

        int m = 0;
        while(t1){
            m = max(m, t1->val + st.top()->val);
            t1 = t1->next;
            st.pop();
        }

        return m;
    }
};

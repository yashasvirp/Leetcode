# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        t1 = t2 = head
        st = []

        while t2 and t2.next:
            st.append(t1)
            t1 = t1.next
            t2 = t2.next.next
        
        m = 0

        while t1:
            m = max(m, t1.val + st.pop().val)
            t1 = t1.next
        
        return m

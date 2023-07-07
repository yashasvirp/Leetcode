# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        s1 = []
        s2 = []

        while l1:
            s1.append(l1.val)
            l1 = l1.next
        
        while l2:
            s2.append(l2.val)
            l2 = l2.next
        
        s = 0
        res = ListNode(0)

        while len(s1) != 0 or len(s2) != 0:
            if len(s1) != 0:
                s += s1.pop()
            
            if len(s2) != 0:
                s += s2.pop()
            
            res.val = s%10
            c = s//10
            t = ListNode(c)
            t.next = res
            res = t
            s = c
        
        return res.next if c == 0 else res

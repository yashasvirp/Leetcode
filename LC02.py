# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode(0)
        t = head
        c = 0

        while l1 or l2 or c:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0
            s = x + y + c
            c = s//10
            t.next = ListNode(s%10)
            t = t.next
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        
        return head.next

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        if head == None:
            return None
        
        if head.next == None:
            return head
        
        prev = None
        curr = head
        n = head.next

        while n:
            curr.next = prev
            prev = curr
            curr = n
            n = n.next
        
        curr.next = prev
        head = curr

        return head

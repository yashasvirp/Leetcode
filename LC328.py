# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        if not head or not head.next:
            return head
        
        i = head;
        j = h1 = head.next

        while i.next and j.next:
            i.next = j.next
            if i.next:
                i = i.next
            j.next = i.next
            if j.next:
                j = j.next
        
        i.next = h1

        return head

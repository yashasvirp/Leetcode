# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        
        if head.next is None:
            return head
        
        temp = head

        while temp and temp.next:
            if temp.val == temp.next.val:
                p = temp.next
                temp.next = p.next
                p.next = None
                del p
            else:
                temp = temp.next
        
        return head

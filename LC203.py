# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:

        if head == None:
            return head
        
        if head.next == None:
            if head.val == val:
                return None
            else:
                return head
        
        while head is not None and head.val == val:
            head = head.next
        
        curr = head

        while curr and curr.next:
            if curr.next.val == val:
                p = curr.next
                curr.next = p.next
                p.next = None
                del p
            else:
                curr = curr.next
        

        return head

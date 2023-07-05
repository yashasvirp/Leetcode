# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def getMin(self, root):
        if root == None:
            return
        
        if(root.left):
            self.getMin(root.left)
        
        self.m = min(self.m , abs(self.prev - root.val))
        self.prev = root.val

        if(root.right):
            self.getMin(root.right)

    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        self.m = float('inf')
        self.prev = float('inf')

        self.getMin(root)
        return self.m

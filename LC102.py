# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        q = []
        res = []

        if not root:
            return res
        
        q.append(root)
        q.append(None)

        while q[0] != None:

            t = q[0]
            v = []
            while t:
                q.pop(0)
                v.append(t.val)

                if t.left:
                    q.append(t.left)
                if t.right:
                    q.append(t.right)
                
                t = q[0]
            
            res.append(v)
            q.pop(0)
            q.append(None)
        
        return res
                

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        
        st = []
        l = []
        
        if root == None:
            return l

        t = root

        while t or len(st) != 0:
            if not t:
                t = st[-1]
                st.pop()
            else:
                if t.left:
                    st.append(t.left)
                l.append(t.val)
                t = t.right
        
        l.reverse()
        return l

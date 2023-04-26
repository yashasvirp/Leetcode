"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        l = []

        if root == None:
            return l
        
        st = []

        st.append(root)

        while len(st) != 0:
            t = st.pop()
            l.append(t.val)

            for i in range(len(t.children)-1, -1, -1):
                st.append(t.children[i])
        
        return l



# Recursive solution
"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def traverse(self, root, l):
        if root == None:
            return
        
        l.append(root.val)
        for i in root.children:
            self.traverse(i,l)
        
    def preorder(self, root: 'Node') -> List[int]:
        l = []

        if root == None:
            return l
        
        self.traverse(root, l)

        return l
        

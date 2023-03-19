# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


#time-log(n)
#start at root
#root is ancestor of every node in tree
#root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1


#check if both p,q greater go to right subtree
#check if both p,q lesser go to left subtree

#if there is a split of p and q,where split occurs is LCA

#edge case
#if one node is root node,root is LCA

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        cur = root
        while cur:
            if p.val > cur.val and q.val > cur.val:
                cur = cur.right
                
            elif p.val < cur.val and q.val < cur.val:
                cur = cur.left
                
            else:
                return cur





        
        
        
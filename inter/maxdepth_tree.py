#height of root -same as maxdepth


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        def height(node):
            if node is None:
                return 0
            
            left=height(node.left)
            right=height(node.right)
            
            return 1+max(left,right)
        
        return height(root)


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        
        def maxdepth(root):
            if root is None:
                return 0
            
            return 1+max(maxdepth(root.right),maxdepth(root.left)) #find maxdepth of each subtree then of the next node
       
        return maxdepth(root)
        
            
            
            
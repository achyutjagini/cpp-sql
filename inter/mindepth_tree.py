

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        
        def mindepth(node):
            if not node:
                return 0
            
            if(node.left is None):            #if left of root is null,the mindepth is not 1 , need to go till a leaf node
                return 1+mindepth(node.right)
            
            if(node.right is None):
                return 1+mindepth(node.left)
            
            return 1+min(mindepth(node.left),mindepth(node.right))
        
        return mindepth(root)
            
            
                
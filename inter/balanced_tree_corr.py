# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def height(node):
            if node is None:
                return 0
            
            left=height(node.left)
            right=height(node.right)
            
            return 1+max(left,right)
        
        def check(node):
            
            left=height(node.left)
            right=height(node.right)
            
            if(abs(left-right)>1):
                return False
            
            return True
        
        def traverse(node):

            if not node:
                return True

            if(not check(node)):
                return False

            if(not traverse(node.left)): #checks height of nodes full left subtree 
                return False

            elif(not traverse(node.right)): #checks height of nodes full right subtree
                return False

            else:
                return True                 #all nodes 
        
        if(traverse(root)):
            return True
            
        return False
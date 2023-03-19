# Definition for a binary tree node.
class TreeNode:
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right

def isBalanced(root):
        def height(node):
            if node is None:
                return 0
            
            left=height(node.left)
            right=height(node.right)
            
            return 1+max(left,right)
        
        def check(node):
            
            left=height(node.left)
            right=height(node.right)
            print(left)
            print(right)
            if(abs(left-right)>1):
                return False
            
            return True
        
        def traverse(node):

            if not node:
                return True
            
            if not node.left and not node.right:
                return True

            if(check(node)):
                return True
      
            traverse(node.left)
            traverse(node.right)
            
        if(traverse(root)):
            return True
        return False

root=TreeNode(3)
root.left=TreeNode(9)
root.right=TreeNode(20)

isBalanced(root)
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:                 
    def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
        
        #depth=1 ,original tree is new node left subtree
        if(depth==1):
            node=TreeNode(val)
            node.left=root
            return node
        
        def insert(node,depth,val,currdepth):
            if(node is None):
                return
            
            if currdepth==depth-1:
                temp=node.left
                node.left=TreeNode(val)
                node.left.left=temp
                
                temp=node.right
                node.right=TreeNode(val)
                node.right.right=temp
                
            else:
                insert(node.left,depth,val,currdepth+1)
                insert(node.right,depth,val,currdepth+1)

        insert(root,depth,val,1)
        return root
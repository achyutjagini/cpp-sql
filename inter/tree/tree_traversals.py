# Python3 program to for tree traversals

# A class that represents an individual node in a
# Binary Tree


class Node:
	def __init__(self, key):
		self.left = None
		self.right = None
		self.val = key


# A function to do inorder tree traversal
def printInorder(root):

	if root:

		# First recur on left child
		printInorder(root.left)

		# then print the data of node
		print(root.val)

		# now recur on right child
		printInorder(root.right)


# A function to do inorder tree traversal
def printPreorder(root):

	if root:
		print(root.val)

		printPreorder(root.left)
		printPreorder(root.right)
        


# A function to do inorder tree traversal
def printPostorder(root):

	if root:

		# First recur on left child
		printPostorder(root.left)
        
		printPostorder(root.right)
		# then print the data of node
		print(root.val)



# Driver code
if __name__ == "__main__":
	root = Node(25)
	root.left = Node(32)
	root.right = Node(60)
	root.left.left = Node(15)
	root.left.right = Node(14)

	root.right.left = Node(17)
	root.right.left.right = Node(18)


	# Function call
	print("Inorder traversal of binary tree is")
	printInorder(root)

	print("Preoder traversal of binary tree is")
	printPreorder(root)

	print("Postorder traversal of binary tree is")
	printPostorder(root)



# Python3 program for the above approach

# Stores the maximum sum of a path
maxSumPath = 0

# Structure of a node in the tree
class Node:
	def __init__(self, key):
		self.val = key
		self.child = []

# Utility function to create a
# new node in the tree
def newNode(key):
	temp = Node(key)
	return temp

# Recursive function to calculate the
# maximum sum in a path using DFS
def DFS(root, Sum):
	global maxSumPath
	# If current node is a leaf node
	if (len(root.child) == 0):
		maxSumPath = max(maxSumPath, Sum)
		return

	# Traversing all children of
	# the current node
	for i in range(len(root.child)):
		# Recursive call for all
		# the children nodes
		DFS(root.child[i], Sum + root.child[i].val)

# Given Generic Tree
root = newNode(1)
(root.child).append(newNode(2))
(root.child).append(newNode(3))
(root.child[0].child).append(newNode(4))
(root.child[1].child).append(newNode(6))
(root.child[0].child).append(newNode(5))
(root.child[1]).child.append(newNode(7))
(root.child[1].child).append(newNode(8))

# Function Call
DFS(root, root.val)

print(maxSumPath)

# This code is contributed by rameshtravel07.

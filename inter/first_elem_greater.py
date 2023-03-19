'''Push the first element to stack.
Pick the rest of the elements one by one and follow the following steps in the loop. 
Mark the current element as next.
If the stack is not empty, compare top most element of stack with next.
If next is greater than the top element, Pop element from the stack. next is the next greater element for the popped element.
Keep popping from the stack while the popped element is smaller than next. next becomes the next greater element for all such popped elements.
Finally, push the next in the stack.
After the loop in step 2 is over, pop all the elements from the stack and print -1 as the next element for them.'''

# Python program to print next greater element using stack

# Stack Functions to be used by printNGE()


def isEmpty(stack):
	return len(stack) == 0


def push(stack, x):
	stack.append(x)


def pop(stack):
	if isEmpty(stack):
		print("Error : stack underflow")
	else:
		return stack.pop()


'''prints element and NGE pair for all elements of
arr[] '''


def printNGE(arr):
	s = []
	element = 0
	next = 0

	# push the first element to stack
	push(s, arr[0]) #s=[11]

	# iterate for rest of the elements
	for i in range(1, len(arr), 1):

		next = arr[i] #next= 13

		if isEmpty(s) == False:

			# if stack is not empty, then pop an element from stack
			element = pop(s) #element=11

			'''If the popped element is smaller than next, then
				a) print the pair
				b) keep popping while elements are smaller and
				stack is not empty '''

			while element < next:
				print(str(element) + " -- " + str(next))
				if isEmpty(s) == True:
					break
				element = pop(s)

			'''If element is greater than next, then push
			the element back '''
			if element > next:
				push(s, element)

		'''push next to stack so that we can find
		next greater for it '''
		push(s, next)

	'''After iterating over the loop, the remaining
	elements in stack do not have the next greater
	element, so print -1 for them '''

	while isEmpty(s) == False:
		element = pop(s)
		next = -1
		print(str(element) + " -- " + str(next))


# Driver code
arr = [11, 13, 21, 3]
printNGE(arr)

# This code is contributed by Sunny Karira

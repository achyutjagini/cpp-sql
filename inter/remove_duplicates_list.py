


def removeDuplicatesOf(node, head):

    if(node == node.next or node.next == head): #node==node.next - single node
        return

    elif (node.value == node.next.value):
        node.next = node.next.next
        removeDuplicatesOf(node, head)

    else:
        removeDuplicatesOf(node.next, head)
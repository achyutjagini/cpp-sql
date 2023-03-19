

removeDuplicatesOf(node, head)

    if(node == node.next || node.next == head) #node
        return

    else if(node.value == node.next.value)
        node.next = node.next.next
        removeDuplicatesOf(node, head)
    else
        removeDuplicatesOf(node.next, head)
class MyQueue {
    Stack<Integer> stack;

    public MyQueue() {
        stack = new Stack<>();
    }
    
    public void push(int x) {
        stack.push(x);
    }
    
    public int pop() {
        int popped = stack.elementAt(0);
        stack.removeElementAt(0);
        return popped;
    }
    
    public int peek() {
        return stack.elementAt(0);
    }
    
    public boolean empty() {
        return stack.isEmpty();
    }
}
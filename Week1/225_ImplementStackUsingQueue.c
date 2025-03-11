class MyStack {

    public MyStack() {
        
    }
    
    public void push(int x) {
        temporaryQueue.push(x);
        while(!mainQueue.empty()){
        temporaryQueue.push(mainQueue.front());
        mainQueue.pop();
    }
    swap(mainQueue,temporaryQueue);
    }
    
    public int pop() {
        int topElement=mainQueue.front();
        mainQueue.pop();
        return topElement;
    }
    
    public int top() {
        return mainQueue.front();
    }
    
    public boolean empty() {
        return mainQueue.empty();
    }
    private queue<int> mainQueue;
    private queue<int> temporaryQueue;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */

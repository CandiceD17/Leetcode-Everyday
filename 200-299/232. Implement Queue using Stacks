class MyQueue {
private:
    stack<int> store;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(store.empty())
            store.push(x);
        else{
            stack<int> reverse;
            while(!store.empty()){
                int num = store.top();
                store.pop();
                reverse.push(num);
            }
            reverse.push(x);
            while(!reverse.empty()){
                int num = reverse.top();
                reverse.pop();
                store.push(num);
            }
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int num = store.top();
        store.pop();
        return num;
    }
    
    /** Get the front element. */
    int peek() {
        int num = store.top();
        return num;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return store.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

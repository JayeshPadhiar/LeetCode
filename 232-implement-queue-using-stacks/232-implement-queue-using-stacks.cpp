class MyQueue {
public:
    stack<int> a;
    stack<int> b;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!b.empty()){
            a.push(b.top());
            b.pop();
        }
        a.push(x);
    }
    
    int pop() {
        int x = peek();
        
        b.pop();
        
        while(!b.empty()){
            a.push(b.top());
            b.pop();
        }
        
        return x;
        
    }
    
    int peek() {
        while(!a.empty()){
            b.push(a.top());
            a.pop();
        }
        
        int x = b.top(); 
        return x;
    }
    
    bool empty() {
        return a.empty()&&b.empty();
        
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
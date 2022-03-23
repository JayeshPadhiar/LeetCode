class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        
    }
    
    int pop() {
        queue<int> x;
        int last;
        
        while(q.size() > 1){
            x.push(q.front());
            q.pop();
        }
        
        last = q.front();
        q.pop();
        
        q = x;
        
        return last;
    }
    
    int top() {
        return q.back();
        
    }
    
    bool empty() {
        
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
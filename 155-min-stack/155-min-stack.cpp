class MinStack {
public:
    stack<int> stk;
    stack<int> m;
    
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(stk.empty()){
            m.push(val);
        }
        
        stk.push(val);
        
        if(m.top() >= val)
            m.push(val);
        
    }
    
    void pop() {
        int val = stk.top();
        
        stk.pop();
        
        if(m.top() == val){
            m.pop();
        }
    }
    
    int top() {
        
        return stk.top();
        
    }
    
    int getMin() {
        return m.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
class CustomStack {
public:
    vector<int> stk;
    int maxSize;
    CustomStack(int maxSize) {
        
        this->maxSize = maxSize;
        
    }
    
    void push(int x) {
        if(stk.size() < maxSize){
            stk.push_back(x);
        }
        
    }
    
    int pop() {
        if(!stk.empty()){
            int x = stk.back();
            stk.pop_back(); 
            return x;
        }
        return -1;        
    }
    
    void increment(int k, int val) {
        
        if(stk.empty())
            return;
        
       
        int x=0;
        while(x<=k-1 && x<stk.size())
        {
            stk[x] += val;
            x++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
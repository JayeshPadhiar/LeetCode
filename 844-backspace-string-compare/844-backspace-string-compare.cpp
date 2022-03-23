class Solution {
public:
    bool backspaceCompare(string a, string b) {
        
        stack<char> s;
        stack<char> t;
        
        for(auto i: a){
            if(i == '#'){
                if(!s.empty())
                    s.pop();
            }else
                s.push(i);
        }
        
        
        for(auto i: b){
            if(i == '#'){
                if(!t.empty())
                    t.pop();
            }else
                t.push(i);
        }
        
        while(!s.empty() && !t.empty()){
            
            if(s.top() != t.top()){
                return false;
            }
            
            s.pop();
            t.pop();
            
        }
        
        if(s.empty() && t.empty())
            return true;
        
        return false;
        
    }
};
class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char, char> map;
        
        map['{'] = '}';
        map['('] = ')';
        map['['] = ']';
        
        
        stack<char> open;
        stack<char> close;
        
        for(auto i: s){
            if(i=='{' || i=='(' || i=='['){
                open.push(i);
            }else{
                close.push(i);
                
                if(!open.empty() && !close.empty())
                {
                    
                if(map[open.top()] != close.top())
                {
                    return false;
                }else{
                    open.pop();
                    close.pop();
                }
                }else{
                    return false;
                }
            }
            
            
        }
        
        
        while(!open.empty() && !close.empty()){
            if(map[open.top()] != close.top())
            {
                return false;
            }
            
            open.pop();
            close.pop();
           
        }
        
        if(open.empty() && close.empty())
            return true;
        
        return false;
        
    }
};
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        string str = "";
        
        for(int i=0; i<s.size(); i++){
            if(!stk.empty() && stk.top() == s[i]){
                stk.pop();
            }else{
                stk.push(s[i]);
            }
        }
        
        while(!stk.empty()){
            str = stk.top()+str;
            stk.pop();
            
        }
        
        return str;
    }
};
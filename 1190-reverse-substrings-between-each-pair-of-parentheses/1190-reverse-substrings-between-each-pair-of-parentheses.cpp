class Solution {
public:
    
    string reverseParentheses(string s) {
        
        stack<int> open, close;
        
        for(int i=0; i<s.length(); i++){
            
            if(s[i]=='('){
                open.push(i);
            }
            
            if(s[i] == ')'){
                int left = open.top();
                int right = i;
                while(right >= left){
                    char temp = s[left];
                    s[left] = s[right];
                    s[right] = temp;
                    
                    right--;
                    left++;
                }
                
                open.pop();
            }
        }
        
        string ans = "";
        
        for(int i=0; i<s.length(); i++){
            if(s[i] != '(' && s[i] != ')')
            {
                ans = ans+s[i];
            }
        }
        
        return ans;
        
        
    }
    
    
};
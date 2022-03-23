class Solution {
public:
    int maxDepth(string s) {
        
        int max_depth = 0;
        int depth = 0;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(')
                depth++;
            
            if(s[i] == ')')
                depth--;
            
            if (depth > max_depth)
                max_depth = depth;
        }
        
        return max_depth;
    }
};
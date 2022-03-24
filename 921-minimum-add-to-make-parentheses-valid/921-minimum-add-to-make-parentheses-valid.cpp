class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int open = 0;
        int close = 0;
        
        int m = 0;
        
        for(auto i: s){
            if(i=='('){
                open++;
            }
            else{
                if(open == 0)
                    m++;
                else
                    close++;
            }
            
            if(open == close)
            {
                open = 0;
                close = 0;
            }
        }
        
        return m+(max(open, close)-min(open, close));
    }
};
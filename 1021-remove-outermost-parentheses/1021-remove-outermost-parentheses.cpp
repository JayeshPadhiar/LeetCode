class Solution {
public:
    string removeOuterParentheses(string s) {
        int a = 0;
        int b = 0;
        
        string str = "";
        
        for(auto i: s){
            if(i == '('){
                a++;
                
                if(a == 1)
                    continue;
                
                str = str+"(";
            }
            else{
                b++;
                
                if(b==a)
                {
                    a=0;
                    b=0;
                    continue;
                }
                
                
                str = str+")";
            }
            
            
            
        }
        
        return str;
    }
};
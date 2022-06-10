class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto s: words){
            
            int x=0;
            int y=s.length()-1;
            
            string str = s;
            
            bool ispalin = true;
            
            while(y >= x){
                if(str[x]== str[y]){}
                else{
                    ispalin = false;
                    break;
                }
                
                x++;
                y--;
            
            }
            
            if(ispalin)
                return str;   
        }
        
        return "";
        
    }
};
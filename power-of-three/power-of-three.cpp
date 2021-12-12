class Solution {
public:
    bool isPowerOfThree(int n) {
        int i=0;
        
        while(n >= pow(3,i))
        {
            if(pow(3,i) == n)
                return true;
            
            i++;
        }
        
        return false;
        
    }
};
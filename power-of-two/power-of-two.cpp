class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        
        while(n>=pow(2,i))
        {
            if(pow(2,i) == n)
                return true;
            
            i++;
        }
        
        return false;
    }
};
class Solution {
public:
    int countVowelStrings(int n) {
        return lexico(0, n);
    }
    
    int lexico(int x, int h){
        if(h <= 0)
            return 1;

        int num = 0;
        for(int i=x; i<5; i++){    
            num+=lexico(i, h-1);
        }
        
        return num;
    }
};
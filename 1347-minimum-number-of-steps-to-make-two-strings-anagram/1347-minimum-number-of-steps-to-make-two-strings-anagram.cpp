class Solution {
public:
    int minSteps(string a, string b) {
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int x=0, y=0;
        
        int numa=0, numb=0;
        
        while(x<a.length() && y<b.length()){
            
            if(a[x] == b[y]){
                numa++;
                numb++;
                x++;
                y++;
            }
            else if(a[x] > b[y]){
                y++;
            }else{
                x++;
            }
            
        }
        
        int ans = min(a.length()-numa, b.length()-numb);
        
        return ans;
        
    }
};
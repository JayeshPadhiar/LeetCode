class Solution {
public:
    double average(vector<int>& salary) {
        int max=salary[0], min=salary[0];
        
        int sum = 0;
        
        for(int i: salary){
            if(i > max)
                max = i;
            if(i < min)
                min = i;
            
            sum+=i;
        }
        
        sum -= (min+max);
        
        return (double)sum/(salary.size()-2);
    }
};
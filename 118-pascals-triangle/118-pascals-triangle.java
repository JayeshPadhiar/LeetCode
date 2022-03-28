class Solution {
    public List<List<Integer>> generate(int numRows) {
        
        List<List<Integer>> ans = new ArrayList();
        ans.add(new ArrayList());
        ans.get(0).add(1);
        
        
        
        for(int i=1; i<numRows; i++){
            
            List<Integer> x = new ArrayList();
            x.add(1);
            ans.add(x);
            
            
            for(int j=1; j<i; j++){
                x.add(ans.get(i-1).get(j-1) + ans.get(i-1).get(j));
            }
            
            
            x.add(1);
        }
        
        return ans;
        
    }
}
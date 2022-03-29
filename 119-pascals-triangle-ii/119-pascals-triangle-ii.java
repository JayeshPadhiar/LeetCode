class Solution {
    public List<Integer> getRow(int rowIndex) {
        
        List<Integer> ans = new ArrayList();
        ans.add(1);
        
        for(int i=0; i<rowIndex; i++){
            
            List<Integer> arr = new ArrayList();
            arr.add(1);
            
            for(int j=0; j<i; j++){
                arr.add(ans.get(j)+ans.get(j+1));
            }
            arr.add(1);
            ans.clear();
            ans.addAll(arr); 
        }
        return ans;
    }
}
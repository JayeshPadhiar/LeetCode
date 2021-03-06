class Solution {
    public boolean checkValid(int[][] matrix) {
        
        int len = matrix.length;
        
        for(int i=0; i<len; i++){
            
            HashSet<Integer> row = new HashSet();
            HashSet<Integer> col = new HashSet();
            
            for(int j=0; j<len; j++){
                if(row.contains(matrix[i][j]) || col.contains(matrix[j][i]))
                    return false;
                else{
                    row.add(matrix[i][j]);
                    col.add(matrix[j][i]);
                }
            }
            
            if(row.size() != len || col.size() != len)
                return false;
        }
        return true;
    }
}
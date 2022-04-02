class Solution {
    boolean[][] seen;
    public int numIslands(char[][] grid) {
        seen = new boolean[grid.length][grid[0].length];
        
        int ans=0;
        
        for(int i=0; i<grid.length; i++){
            for(int j=0; j<grid[0].length; j++){
                if(!seen[i][j] && grid[i][j]=='1'){
                    fill(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
    
    public void fill(char[][] grid, int r, int c){
        
        if(r<0 || r>=grid.length || c<0 || c>=grid[0].length)
            return;
        
        if(grid[r][c] == '0' || seen[r][c])
            return;
        
        seen[r][c] = true;
        fill(grid, r-1, c);
        fill(grid, r+1, c);
        fill(grid, r, c-1);
        fill(grid, r, c+1);
        return;
    }
}
class Solution {
    public boolean checkStraightLine(int[][] coo) {
        
        int x1 = coo[0][0], y1 = coo[0][1];
        int x2 = coo[1][0], y2 = coo[1][1];
        
        for (int i = 2; i < coo.length; i++) {
            int x3 = coo[i][0], y3 = coo[i][1];
            if((y2 - y1)*(x3 - x1) != (x2 - x1)*(y3 - y1)) return false;
        }
        return true;
    }
}
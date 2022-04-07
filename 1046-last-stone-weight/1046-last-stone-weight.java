class Solution {
    public int lastStoneWeight(int[] stones) {
        
        int a=0, b=0;
        
        if(stones.length < 2)
            return stones[0];
        
        while(true){
            int fir = Integer.MIN_VALUE;
            int sec = Integer.MIN_VALUE;
            
            for(int i=0; i<stones.length; i++){
                
                if(stones[i] >= fir){
                    sec = fir;
                    b = a;
                    fir = stones[i];
                    a = i;
                }
                else if(stones[i] > sec){
                    sec = stones[i];
                    b = i;
                }
            }
            
            //System.out.println(stones[a] + " " + stones[b]);
            
            if(stones[a]==0 && stones[b]==0)
                return 0;
            
            if(stones[a]==0 || stones[b]==0)
                break;
            
            if(stones[a] == stones[b]){
                stones[a] = 0;
                stones[b] = 0;
            }else if(stones[a] <= stones[b]){
                stones[b] -= stones[a];
                stones[a] = 0;
            }else{
                stones[a] -= stones[b];
                stones[b] = 0;
            }
        }
        
        return (stones[a]==0)?stones[b]:stones[a];
        
    }
}
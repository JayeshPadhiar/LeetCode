class Solution {
    public int lastStoneWeight(int[] stones) {
        
        
        int a = stones.length-1;
        int b = stones.length-2;
        
        if(stones.length < 2)
            return stones[0];
        
        Arrays.sort(stones);
        while(stones[b] != 0){
            for(int i: stones)
                System.out.print(i);
            
            if(stones[a]==0 && stones[b]==0)
                return 0;
            
            if(stones[a] == stones[b]){
                stones[a]=0;
                stones[b]=0;
            }else if(stones[a] <= stones[b]){
                stones[b]-=stones[a];
                stones[a]=0;
            }else{
                stones[a]-=stones[b];
                stones[b]=0;
            }
            Arrays.sort(stones);
        }
        
        return stones[a];
    }
}
class Solution {
    public int[] sortByBits(int[] arr) {
        HashMap<Integer, List<Integer>> map = new HashMap();
        int[] rr = new int[arr.length];
        int[] ans = new int[arr.length];
        int index = 0;
        
        for(int i: arr){
            int bits = 0;
            int num = i;
            
            while(num!=0){
                if((num&1) == 1){
                    bits++;
                }
                num = num>>>1;
            }
            
            if(map.containsKey(bits)){
                map.get(bits).add(i);
            }else{
                List<Integer> l = new ArrayList();
                l.add(i);
                map.put(bits, l);
            }
            
            rr[index++] = bits;
        }
        
        int x = 0;
        Arrays.sort(rr);
        for(int i: rr){
            List<Integer> lis = map.get(i);
            Collections.sort(lis);
            
            while(lis.size() != 0){
                ans[x++] = lis.get(0);
                lis.remove(0);
            }
        }
        
        return ans;
    }
}
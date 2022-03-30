class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        List<Integer> ans = new ArrayList();
        
        int m=0, n=0;
        
        while(m<nums1.length && n<nums2.length){
            if(nums1[m] == nums2[n]){
                ans.add(nums1[m]);
                m++;
                n++;
            }else if(nums1[m] < nums2[n]){
                m++;
            }else
                n++;
        }
        
        return ans.stream().mapToInt(Integer::intValue).toArray();
        
        //return x;
        
    }
}
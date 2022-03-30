class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        
        int x = m-1;
        int y = n-1;
        int i = (m+n)-1;
        
        while(x >= 0 && y>=0){
            if(nums1[x]<nums2[y]){
                nums1[i--] = nums2[y--];
            }else{
                nums1[i--] = nums1[x--];
            }
        }
        
        while(i>=0 && x>=0){
            nums1[i--] = nums1[x--];
        }
        
        while(i>=0 && y>=0){
            nums1[i--] = nums2[y--];
        }
    }
}
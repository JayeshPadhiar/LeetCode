class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        
        int ans = 0;
        
        for(int l=1; l<=arr.length; l+=2){
            int sum=0, prev=0;
            int x=0;
            
            while(x < l){
                sum+=arr[x++];
            }
            ans+=sum;
            
            for(int i=x; i<arr.length; i++){
                sum += arr[i]-arr[prev++];
                ans+=sum;
            }
        }
        return ans;
    }
}
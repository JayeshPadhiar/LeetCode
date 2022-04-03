class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        
        int ans=0;
        int sum=0;
        
        double avg=0;
        
        for(int i=0, j=0; i<arr.length; i++){
            if(i<k){
                sum+=arr[i];
                continue;
            }
            
            avg = (double)sum/k;
            if(avg >= threshold){
                ans++;
            }
            
            sum -= arr[j++];
            sum += arr[i];
        }
        
        avg = (double)sum/k;
        if(avg >= threshold){
            ans++;
        }
        
        return ans;
    }
}
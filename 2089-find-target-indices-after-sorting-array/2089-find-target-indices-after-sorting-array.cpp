class Solution {
public:
    void merge(vector<int> &arr, int left, int mid, int right){
        
        int lsize = mid-left+1;
        int rsize = right-mid;
        
        vector<int> L(lsize);
        vector<int> R(rsize);
        
        for(int i=0; i<lsize; i++){
            L[i] = arr[left+i];
        }
        
        for(int i=0; i<rsize; i++){
            R[i] = arr[mid+i+1];
        }
        
        int i=0, j=0, k=left;
        
        while(i<lsize && j<rsize){
            if(L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            }else{
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        
        while(i<lsize){
            arr[k] = L[i];
            i++;
            k++;
        }
        
        while(j<rsize){
            arr[k] = R[j];
            j++;
            k++;
        }
        
    }
    
    void mergesort(vector<int> &arr, int left, int right){
        if(left < right){
            int mid = left+(right-left)/2;
            mergesort(arr, left, mid);
            mergesort(arr, mid+1, right);
            merge(arr, left, mid, right);
        }
    }
    
    vector<int> binarySearch(vector<int> arr, int val){
        
        int left = 0;
        int right = arr.size()-1;
        
        vector<int> vec;
        
        while(right >= left){
            int mid = left + (right-left)/2;
            
            if(arr[mid] == val){
                vec.push_back(mid);
                int i=mid-1, j=mid+1;
                while((i>=0 && arr[i]==val) || (j<arr.size() && arr[j]==val)){
                    if(i>=0 && arr[i] == val){
                        vec.insert(vec.begin(), i);
                        i--;
                    }
                    if(j<arr.size() && arr[j] == val){
                        vec.push_back(j);
                        j++;
                    }
                }
                return vec;
            }
            else if(arr[mid] > val){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return vec;
    }
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        mergesort(nums, 0, nums.size()-1);
        vector<int> ans = binarySearch(nums, target);
            
        return ans;
        
    }
};
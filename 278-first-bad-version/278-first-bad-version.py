# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        
        left = 0
        right = n
        mid = (right+left)//2
        
        while(left <= right):
            mid = (right+left)//2
            
            if isBadVersion(mid):
                right = mid-1
            else:
                left = mid+1
                
        if isBadVersion(mid):
            return mid
        else:
            return mid+1
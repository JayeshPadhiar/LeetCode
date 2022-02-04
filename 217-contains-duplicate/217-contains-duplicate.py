class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dic = dict()
        
        for i in nums:
            if dic.get(i):
                return True
            else:
                dic[i] = True
                
        return False
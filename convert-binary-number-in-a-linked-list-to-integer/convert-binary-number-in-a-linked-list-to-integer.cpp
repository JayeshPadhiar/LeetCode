/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> arr;
        int base=1;
        int ans=0;
        
        while(head)
        {
            arr.insert(arr.begin() ,(head->val));
            head = head->next;
        }
        
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i])
            {
                ans+=base;
            }
            
            base*=2;
        }
        
        return ans;
        
    }
};
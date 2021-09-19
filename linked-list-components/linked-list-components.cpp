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
    int numComponents(ListNode* head, vector<int>& nums) {
        
        unordered_map<int, bool> map;
        
        for(int i=0; i<nums.size(); i++)
            map[nums[i]] = true;
        
        ListNode *node = head;
        
        int ans = 0;
        bool linking = false;
        
        while(node)
        {
            if(map[node->val])
            {
                if(!linking)
                {
                    ans++;
                    linking = true;
                }
            }else{
                linking = false;
            }  
            node = node->next;
        }
        
        return ans;
    }
};
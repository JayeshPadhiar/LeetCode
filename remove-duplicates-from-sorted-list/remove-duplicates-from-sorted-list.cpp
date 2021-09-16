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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *node = head;
        
        while(node && node->next)
        {
            ListNode *temp = node->next;
            
            while((temp->next) && temp->val == node->val)
                temp = temp->next;
            
            node->next = temp;
            
            if((node->val == node->next->val) && !(node->next->next))
            {
                node->next = NULL;
            }
            
            node = node->next;
        }
        
        
            
        return head;
    }
};
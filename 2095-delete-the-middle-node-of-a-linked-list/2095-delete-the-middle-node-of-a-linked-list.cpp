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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        cout<<slow->val<<endl;
        
        if(slow == head)
            return NULL;
        
        if(!head->next->next){
            head->next = NULL;
            return head;
        }
        
        while(slow->next){
            slow->val = slow->next->val;
            if(slow->next->next)
                slow = slow->next;
            else
                slow->next = NULL;
        }
        
        
        return head;
    }
};
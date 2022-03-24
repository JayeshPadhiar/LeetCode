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
    int pairSum(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        
        while(fast && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        stack<int> stk;
        
        while(slow){
            stk.push(slow->val);
            slow = slow->next;
        }
        
        ListNode *trav = head;
        
        int max_sum = trav->val+stk.top();
        trav = trav->next;
        stk.pop();
        
        while(!stk.empty()){
            if(max_sum < trav->val+stk.top()){
                max_sum = trav->val+stk.top();
            }
            
            trav = trav->next;
            stk.pop();
        }
        
        return max_sum;
        
    }
};
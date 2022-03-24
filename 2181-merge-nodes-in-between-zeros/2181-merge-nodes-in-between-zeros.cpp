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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ans = head;
        
        ListNode *trav = head;
        while(trav->next){
            
            if(trav->next->val != 0){
                trav->val = trav->val + trav->next->val;
                ListNode *temp = trav->next;
                trav->next = temp->next;
                delete temp;
            }
            else{
                if(trav->next->next)
                    trav = trav->next;
                else{
                    trav->next = NULL;
                }
            } 
            
                
        }
        
        
        
        
        return ans;
            
    }
};
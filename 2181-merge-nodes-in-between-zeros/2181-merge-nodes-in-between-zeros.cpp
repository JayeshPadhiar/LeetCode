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
        ListNode *ans = new ListNode();
        ListNode *node = ans;
        
        ListNode *trav = head;
        int sum = 0;
        while(trav){
            
            if(trav == head){
                trav = trav->next;
            }
            
            if(trav->val == 0){
                ListNode *temp = new ListNode(sum);
                node->next = temp;
                node = node->next;   
                sum = 0;
            }else{
                sum += trav->val;
            }   
            trav = trav->next; 
        }
        return ans->next;
    }
};
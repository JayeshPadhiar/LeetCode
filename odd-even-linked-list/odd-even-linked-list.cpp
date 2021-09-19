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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode *even = new ListNode();
        ListNode *enode = even;
        
        ListNode *node = head;
        
        if(!node || !node->next || !node->next->next)
        {
            return head;
        }
        
        while(node && node->next)
        {
            ListNode *temp = node->next;
            enode->next = new ListNode(temp->val);
            enode = enode->next;
            
            node->next = node->next->next;
            delete temp;
            
            if(node->next)
                node = node->next;
        }
        
        node->next = even->next;
        
        return head;
        
    }
};
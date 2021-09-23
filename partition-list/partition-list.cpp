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
    ListNode* partition(ListNode* head, int x) {
        ListNode *node = head;
        
        ListNode *less = NULL;
        ListNode *more = NULL;
        
        
        while(node)
        {
            ListNode *temp = node;
            if(node->val < x)
            {
                ListNode *newnode = new ListNode(node->val, less);
                less = newnode;
            }else{
                ListNode *newnode = new ListNode(node->val, more);
                more = newnode;
            }
            node = node->next;
            delete temp;
        }
        
        ListNode *ans = NULL;
        
        while(more)
        {
            ListNode *temp = more;
            ListNode *newnode = new ListNode(more->val, ans);
            ans = newnode;
            
            more = more->next;
            delete temp;
        }
        
        while(less)
        {
            ListNode *temp = less;
            ListNode *newnode = new ListNode(less->val, ans);
            ans = newnode;
            less = less->next;
            delete temp;
        }
        return ans;
    }
};
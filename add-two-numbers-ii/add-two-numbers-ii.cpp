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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
        
        ListNode *x = NULL, *y = NULL;
        
        while(a || b)
        {
            if(a)
            {
                ListNode *node = new ListNode(a->val, x);
                x = node;
                a = a->next;
            }
            
            if(b)
            {
                ListNode *node = new ListNode(b->val, y);
                y = node;
                b = b->next;
            }
        }
        
        ListNode *ans = NULL;
        
        int carry = 0;
        
        while(x || y)
        {
            int xval=0, yval=0;
            int add = 0;
            
            if(x)
            {
                xval = x->val;
                x = x->next;
            }
            
            if(y)
            {
                yval = y->val;
                y = y->next;
            }
            
            add = xval+yval+carry;
            
            ListNode *node = new ListNode(add%10, ans);
            ans = node;
            add/=10;
            carry = add;
        }
        
        if(carry)
        {
            ListNode *node = new ListNode(carry, ans);
            ans = node;
        }
        
        return ans;
    }
};
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
    ListNode* addTwoNumbers(ListNode* x, ListNode* y) {
        
        ListNode *arr = new ListNode();
        ListNode *ans = arr;
        
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
            
            ans->next = new ListNode(add%10);
            ans = ans->next;
            add/=10;
            carry = add;
        }
        
        if(carry)
        {
            ans->next = new ListNode(carry);
            ans = ans->next;
        }
        
        return arr->next;
        
    }
};
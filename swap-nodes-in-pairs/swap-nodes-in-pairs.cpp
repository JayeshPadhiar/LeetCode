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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head)
            return NULL;
        
        ListNode *a = new ListNode();
        ListNode *b = new ListNode();
        ListNode *node = head;
        bool flag = false;
        
        while(node)
        {
            ListNode *atemp = node;
            node = node->next;
            atemp->next = a;
            a = atemp;
            if(node)
            {
                ListNode *btemp = node;
                node = node->next;
                btemp->next = b;
                b = btemp;
            }else{
                flag = true;
            }
        }
    
        ListNode *ans = NULL;
        while(a->next || b->next)
        {
            if(a->next)
            {
                ListNode *atemp = a;
                a = a->next;
                
                atemp->next = ans;
                ans = atemp;
            }
            
            if(flag == true && a->next)
            {            
                ListNode *atemp = a;
                a = a->next;    
                atemp->next = ans;
                ans = atemp;
                flag = false;
            }
                
            if(b->next)
            {
                ListNode *btemp = b;
                b = b->next;    
                btemp->next = ans;
                ans = btemp;
            }
        }
        return ans;
    }
};
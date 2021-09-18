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
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(!head->next)
            return head;
        
        else if(!head->next->next)
        {            
            head->next->next = head;
            head = head->next;
            head->next->next = NULL;
            return head;
        }
        
        else if(k==1)
        {
            ListNode *trav = head;
            while(trav->next->next)
                trav = trav->next;
            trav->next->next = head->next;
            ListNode *newhead = trav->next;
            trav->next = head;
            head->next = NULL;
            return newhead;            
        }
        
        else {
            
            int frombegin = k-2;
            ListNode *trav = head;
            
            while(frombegin)
            {
                trav = trav->next;
                frombegin--;
            }
            
            if(!trav->next->next)
            {
                
                cout<<"Yooooo";
                int temp = trav->next->val;
                trav->next->val = head->val;
                head->val = temp;
                
                return head;
            }
            
            ListNode *a = trav;
            ListNode *b = head;
            
            trav = trav->next;
            
            while(trav->next->next)
            {
                trav = trav->next;
                b = b->next;
                
            }
            
            if(a == b)
            {
                return head;
            }
            
            int temp = a->next->val;
            a->next->val = b->next->val;
            b->next->val = temp;
    
            return head;
        }
        
    }
};
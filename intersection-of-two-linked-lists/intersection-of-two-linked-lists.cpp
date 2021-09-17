/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA; 
        ListNode *b = headB;
        
        unordered_map<ListNode*, int> map;
        
        while(a && b)
        {
            if(map[a] == 1)
                return a;
            else
                map[a] = 1;
            
            if(map[b] == 1)
                return b;
            else
                map[b] = 1;
            
            a = a->next;
            b = b->next;
        }
        
        while(a)
        {
            if(map[a] == 1)
                return a;
            else
                map[a] = 1;
            
                a = a->next;  
        }
        
        while(b)
        {
            if(map[b] == 1)
                return b;
            else
                map[b] = 1;
            
                b = b->next;  
        }
        return NULL;
    
    }
};
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *x = list1; 
        ListNode *y = list1;
        
        while(a-1)
        {
            x = x->next;
            a--;
        }
        
        while(b)
        {
            y = y->next;
            b--;
        }
        
        ListNode *trav = list2;
        
        while(trav->next)
        {
            trav = trav->next;
        }
        
        x->next = list2;
        trav->next = y->next;
        
        
        return list1;
        
    }
};
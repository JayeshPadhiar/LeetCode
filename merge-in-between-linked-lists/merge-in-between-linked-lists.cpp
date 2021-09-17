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
        
        int ab = b-a+1;
        
        while(a-1)
        {
            x = x->next;
            y = y->next;
            a--;
        }
        
        while(ab > 0)
        {
            y = y->next;
            ab--;
        }
        
        cout<<x->val<<endl;
        cout<<y->val<<endl;
        
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
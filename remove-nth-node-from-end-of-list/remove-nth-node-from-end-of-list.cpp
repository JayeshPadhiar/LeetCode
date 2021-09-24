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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *node = head;
        int i = 0;
        ListNode *last = new ListNode(0, head);
        
        while(node)
        {
            if(i++>=n){
                last = last->next;
            }
            node = node->next;
        }
        
        cout<<last->val;
        if(last->next == head)
            head = head->next;
        else
            last->next = last->next->next;
        
        return head;
    }
};
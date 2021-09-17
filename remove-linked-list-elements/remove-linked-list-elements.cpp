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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL)
            return head;
        
        while(head && head->val == val)
            head = head->next;
        
        ListNode *node = head;
        ListNode *list = new ListNode();
        ListNode *trav = list;
        
        
        while(node)
        {
            if(node->val != val)
            {
                ListNode *newNode = new ListNode(node->val);
                trav->next = newNode;
                trav = trav->next;
                //trav->next = new ListNode(node->val);
                //trav = trav->next;
            }
            ListNode *temp = node;
            node = node->next;
            
            delete temp;
        }
        
        return list->next;
        
    }
};
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
    void reorderList(ListNode* head) {
        
        stack<ListNode *> a;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *end = slow;
        while(slow){
            a.push(slow);
            slow = slow->next;
        }
        
        ListNode *list = new ListNode();
        ListNode * tr = list;
        
        while(!a.empty()){
            tr->next = head;
            head = head->next;
            tr = tr->next;
            
            tr->next = a.top();
            a.pop();
            tr = tr->next;
        }
        tr->next = NULL;
        
        while(list){
            list = list->next;
        }
        
        
        
        
        
    }
};
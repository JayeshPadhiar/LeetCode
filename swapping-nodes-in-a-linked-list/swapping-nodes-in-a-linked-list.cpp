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
    
    if(head==nullptr || head->next==nullptr)
    return head;
    
    ListNode *slow=head,*fast=head;
    
    int i=k-1;
    while(i-- && fast->next!=nullptr)
    {
        fast=fast->next;
    }
    ListNode *temp=fast;
    while(fast!=nullptr && fast->next!=nullptr)
    {
         slow=slow->next;
        fast=fast->next;
    }
    swap(temp->val,slow->val);
    return head;

        
    }
};
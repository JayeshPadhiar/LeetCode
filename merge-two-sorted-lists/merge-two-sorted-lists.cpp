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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *a = l1;
	ListNode *b = l2;
	if(a == NULL && b == NULL)
		return NULL;

	ListNode *start = new ListNode();

	ListNode *headstart = start;

	while(a && b)
	{
		if((a->val) <= (b->val))
		{
			//cout<<"A"<<endl;
			ListNode *nex = new ListNode(a->val);
			start->next = nex;
			a = a->next;
		}else{
			//cout<<"B"<<endl;
			ListNode *nex = new ListNode(b->val);
			start->next = nex;
			b = b->next;
		}
		start = start->next;
	}

	while(a)
	{
		
		ListNode *nex = new ListNode(a->val);
		start->next = nex;
		start = start->next;
		a = a->next;
	}

	while(b)
	{
		
		ListNode *nex = new ListNode(b->val);
		start->next = nex;
		start = start->next;
		b = b->next;
	}

	//cout<<start->val<<endl;

	//delete_list(x);
	//delete_list(y);

	return headstart->next;
        
    }
};
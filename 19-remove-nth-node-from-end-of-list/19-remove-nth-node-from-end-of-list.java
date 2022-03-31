/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head.next == null)
            return null;
        
        ListNode node = new ListNode();
        ListNode trav = head;
        node.next = head;
        
        while(trav != null){
            if(n<=0){
                node = node.next;
            }else
                n--;
            trav = trav.next;
        }
        
        if(node.next == head)
            return head.next;
        else
            node.next=node.next.next;  
        
        return head;
    }
}
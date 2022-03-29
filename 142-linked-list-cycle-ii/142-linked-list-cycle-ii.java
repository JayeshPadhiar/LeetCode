/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        
        if(fast == null || fast.next == null)
            return null;
        slow = slow.next;
        fast = fast.next.next;
        
        while(fast!=null && fast.next!=null){
            
            if(fast == slow){
                break;
            } 
            slow = slow.next;
            fast = fast.next.next;
        }
        
        if(fast == null || fast.next == null)
            return null;
        
        slow = head;
        
        while(fast!=null && fast.next!=null){
            if(fast == slow){
                break;
            } 
            slow = slow.next;
            fast = fast.next;
        }
        
        return slow;
    }
}
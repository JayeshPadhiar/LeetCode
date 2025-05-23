/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {

    if (!head || !head.next){
        return head;
    }

    let prev = null;
    let curr = head;
    let next = curr.next;

    while(next){
        curr.next = prev;
        prev = curr;
        curr = next;
        next = next.next;
    }

    curr.next = prev;
    prev = curr;

    return prev;    
};
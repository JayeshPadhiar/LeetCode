/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {

    let trav = new ListNode(0, head);
    let ans = trav;

    while(n--){
        trav = trav.next;
    }

    let nth = head;
    let prev = ans;

    while(trav && trav.next){
        prev = nth;
        trav = trav.next;
        nth = nth.next;
    }

    prev.next = nth.next;
    return ans.next;
};
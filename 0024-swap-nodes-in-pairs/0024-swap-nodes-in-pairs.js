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
var swapPairs = function(head) {

    let ans = new ListNode(0, head);

    let trav = ans;

    while(trav && trav.next && trav.next.next){
        let temp = trav.next;
        trav.next = temp.next;
        temp.next = trav.next.next;
        trav.next.next = temp;
        trav = trav.next.next;
    }

    return ans.next;
};
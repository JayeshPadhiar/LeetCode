/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var rotateRight = function(head, k) {


    if(!head){
        return null;
    }

    let trav = head;
    let length = 1;

    while(trav.next){
        length++;
        trav = trav.next;
    }

    trav.next = head;
    let steps = (k <= length)? length-k : length-(k%length);

    while(steps>0){
        trav = trav.next;
        steps--;
    }

    head = trav.next;
    trav.next= null;

    return head;

};
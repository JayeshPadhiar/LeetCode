/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
var getDecimalValue = function(head) {

    let length = 0;
    let ans = 0;

    let trav = head;
    while(trav){
        length++;
        trav = trav.next;
    }

    while(head){
        length--;

        ans += head.val * Math.pow(2, length);
        head = head.next;
    }

    return ans;

    
};
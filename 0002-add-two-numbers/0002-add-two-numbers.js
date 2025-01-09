/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {

    let ans = new ListNode(0);
    let trav = ans;

    let carry = 0;

    while(l1 || l2){
        let l1_val = (l1)? l1.val : 0;
        let l2_val = (l2)? l2.val : 0;
        let digit_sum = l1_val + l2_val + carry;
        let digit = digit_sum > 9? (digit_sum % 10): digit_sum;
        carry = digit_sum > 9? 1: 0;
        let new_node = new ListNode(digit);
        trav.next = new_node;
        trav = trav.next;

        if(l1){
            l1 = l1.next;
        }

        if(l2){
            l2 = l2.next;
        }
    }

    if(carry){
        let new_node = new ListNode(carry);
        trav.next = new_node;
        trav = trav.next;
    }
    return ans.next;
};


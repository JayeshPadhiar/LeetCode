/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {

    let trav = head;
    let nums = [];
    while(trav){
        nums.push(trav.val);
        trav = trav.next;
    }

    trav = head;
    while(trav){
        if(nums.pop() != trav.val){
            return false;
        }
        trav = trav.next;
    }
    return true;  
};
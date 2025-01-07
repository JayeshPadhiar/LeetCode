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

    let l = 0;
    let r = nums.length-1;

    while(l <= r){
        if(nums[l] != nums[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;  
};
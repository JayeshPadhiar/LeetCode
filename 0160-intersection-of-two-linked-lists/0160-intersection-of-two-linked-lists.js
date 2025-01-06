/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {

    let trav1 = headA;
    let trav2 = headB;

    let list1Length = 0;
    let list2Length = 0;

    while(trav1 || trav2){

        if(trav1){
            list1Length++;
            trav1 = trav1.next;
        }

        if(trav2){
            list2Length++;
            trav2 = trav2.next;
        }
    }

    let lengthDiff = (list1Length > list2Length)? list1Length-list2Length :list2Length-list1Length;


    let pointer1 = (list1Length > list2Length)? headA : headB;
    let pointer2 = (list1Length > list2Length)? headB : headA;
    while(lengthDiff){
        pointer1 = pointer1.next;
        lengthDiff--;
    }

    while(pointer1){
        if(pointer1 == pointer2){
            return pointer1;
        }
        pointer1 = pointer1.next;
        pointer2 = pointer2.next;
    }

    return null;
};
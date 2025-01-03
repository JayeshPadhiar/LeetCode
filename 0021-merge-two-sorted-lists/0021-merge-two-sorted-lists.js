/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {

    let trav = new ListNode();
    let ans = trav;


    while(list1 && list2){
        if(list1.val <= list2.val){
            trav.next = list1;
            list1 = list1.next;
        }else{
            trav.next = list2;
            list2 = list2.next;
        }

        trav = trav.next;
    }

    if(list1){
        trav.next = list1;
    }else{
        trav.next = list2;
    }

    return ans.next;

};
/**
 * // Definition for a _Node.
 * function _Node(val, next, random) {
 *    this.val = val;
 *    this.next = next;
 *    this.random = random;
 * };
 */

/**
 * @param {_Node} head
 * @return {_Node}
 */
var copyRandomList = function(head) {

    if(!head){
        return null;
    }

    let map = new Map();
    let new_map = new Map();

    let ans = new _Node();
    let new_trav = ans;

    index = 1;

    let trav = head;

    while(trav){
        let node = new _Node(trav.val);
        new_trav.next = node;

        map.set(trav, index);
        new_map.set(index, node);

        trav = trav.next;
        new_trav = new_trav.next;
        index++;
    }

    index = 1;
    trav = head;
    new_trav = ans.next;

    while(trav){
        new_trav.random = new_map.get(map.get(trav.random));
        trav = trav.next;
        new_trav = new_trav.next;
        index++;
    }

    return ans.next;

};
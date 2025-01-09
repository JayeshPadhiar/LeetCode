
var MyHashSet = function() {
    let head = null;
};

function Node(val) {
    this.val = val;
    this.next = null;
}

/** 
 * @param {number} key
 * @return {void}
 */
MyHashSet.prototype.add = function(key) {

    if(!this.head){
        this.head = new Node(key);
    }else if(!this.contains(key)){
        let trav = this.head;

        while(trav.next){
            trav = trav.next;
        }

        let new_node = new Node(key);
        trav.next = new_node;
    }else{

    }
    
};

/** 
 * @param {number} key
 * @return {void}
 */
MyHashSet.prototype.remove = function(key) {
    

    if(this.head && this.head.val == key){
        this.head = this.head.next;
    }

    let trav = new Node(0);
    trav.next = this.head;

    while(trav && trav.next){
        if(trav.next.val == key){
            trav.next = trav.next.next;
        }
        trav = trav.next;
    }
};

/** 
 * @param {number} key
 * @return {boolean}
 */
MyHashSet.prototype.contains = function(key) {

    let trav = this.head;

    

    while(trav){
        if(trav.val == key){
            return true;
        }
        trav = trav.next;
    }

    return false;
};

/** 
 * Your MyHashSet object will be instantiated and called as such:
 * var obj = new MyHashSet()
 * obj.add(key)
 * obj.remove(key)
 * var param_3 = obj.contains(key)
 */
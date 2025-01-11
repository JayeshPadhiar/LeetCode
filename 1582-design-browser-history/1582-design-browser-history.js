var Node = function(val, prev=null, next=null){
    this.val = val;
    this.prev = prev;
    this.next = next;
}

/**
 * @param {string} homepage
 */
var BrowserHistory = function(homepage) {
    this.ans = new Node(homepage);
    this.trav = this.ans;
};

/** 
 * @param {string} url
 * @return {void}
 */
BrowserHistory.prototype.visit = function(url) {
    let node = new Node(url, this.trav, null);
    this.trav.next = node;
    this.trav = this.trav.next;
};

/** 
 * @param {number} steps
 * @return {string}
 */
BrowserHistory.prototype.back = function(steps) {
    while(steps){
        if(this.trav.prev){
            this.trav = this.trav.prev;
        }
        steps = steps-1;
    }
    return this.trav.val;
};

/** 
 * @param {number} steps
 * @return {string}
 */
BrowserHistory.prototype.forward = function(steps) {
    while(steps){
        if(this.trav.next){
            this.trav = this.trav.next;
        }
        steps = steps-1;
    }
    return this.trav.val;
};

/** 
 * Your BrowserHistory object will be instantiated and called as such:
 * var obj = new BrowserHistory(homepage)
 * obj.visit(url)
 * var param_2 = obj.back(steps)
 * var param_3 = obj.forward(steps)
 */
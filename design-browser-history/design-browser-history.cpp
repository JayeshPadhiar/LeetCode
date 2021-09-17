class BrowserHistory {
public:
        
    class Node {
        public:
            string url;
            Node *prev;
            Node *next;
        
            Node(){
                url = "";
                prev = NULL;
                next = NULL;
            }
        
            Node(string s){
                url = s;
                prev = NULL;
                next = NULL;
            }
        
            Node(string s, Node *prevnode){
                url = s;
                prev = prevnode;
                next = NULL;
            }   
    };
    
    Node *node;
    
    BrowserHistory(string homepage) {
        node = new Node(homepage);
    }
    
    void visit(string url) {
        Node *newnode = new Node(url, node);
        node->next = newnode;
        node = node->next;
    }
    
    string back(int steps) {
        while(node->prev && steps)
        {
            node = node->prev;
            steps--;
        }
        
        return node->url;
    }
    
    string forward(int steps) {
        while(node->next && steps)
        {
            node = node->next;
            steps--;
        }
        return node->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
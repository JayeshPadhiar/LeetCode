class MyHashSet {
public:
    int arr[10000001];
    
    MyHashSet() {}
    
    void add(int key) {
        arr[key] = 1;
      
    }
    
    void remove(int key) {
        arr[key] = 0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(arr[key] == 1)
            return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
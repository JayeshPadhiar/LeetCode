class Node {
public:
    Node*prev;
    Node*next;
    int val;
    Node(int x) {
        this->val = x;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class MyCircularDeque {
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    Node*head;
    Node*tail;
    int curSize = 0;
    int maxSize ;
    MyCircularDeque(int k) {
        this->maxSize = k;
        this->head = nullptr;
        this->tail = nullptr;
    }

    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if (curSize >= maxSize) return false;

        Node* toBeInserted = new Node(value);
        if (curSize == 0) {
            head = toBeInserted;
            tail = toBeInserted;
            head->prev = tail;
            tail->next = head;
            curSize++;
            return true;
        }

        toBeInserted->next = head;
        tail->next = toBeInserted;
        toBeInserted->prev = tail;
        head->prev = toBeInserted;
        head = toBeInserted;
        curSize++;
        return true;

    }

    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if (curSize >= maxSize)  return false;

        Node* toBeInserted = new Node(value);

        if (curSize == 0) {
            head = toBeInserted;
            tail = toBeInserted;
            head->prev = toBeInserted;
            tail->next = toBeInserted;
            curSize++;
            return true;
        }
        tail->next = toBeInserted;
        toBeInserted -> next = head;
        head->prev = toBeInserted;
        toBeInserted->prev = tail;
        tail = toBeInserted;
        curSize++;
        return true;


    }

    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if (curSize == 0) return false;

        head = head->next;
        tail->next = head;
        head->prev = tail;
        curSize--;
        return true;


    }

    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if (curSize == 0) return false;

        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        curSize--;
        return true;

    }

    /** Get the front item from the deque. */
    int getFront() {
        if (curSize == 0) return -1;
        return head->val;
    }

    /** Get the last item from the deque. */
    int getRear() {
        if (curSize == 0) return -1;
        return tail->val;
    }

    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return curSize == 0;
    }

    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return curSize == maxSize;
    }
};
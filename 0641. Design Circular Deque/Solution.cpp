class MyCircularDeque {
public:
    vector<int> dq;
    int size;
    int maxSize;
    int head;
    int tail;
    MyCircularDeque(int k) {
        dq = vector<int>(k);
        head = 0;
        tail = 0;
        size = 0;
        maxSize = k;
    }
    
    bool insertFront(int value) {
        if (isFull()) return false;

        if (--head < 0) head = maxSize - 1;
        dq[head] = value;
        size++;

        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        dq[tail] = value;
        tail = (tail + 1) % maxSize;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) return false;
        head = (head + 1) % maxSize;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) return false;
        tail = (tail - 1 < 0) ? maxSize - 1 : tail - 1;
        size--;
        return true;
    }
    
    int getFront() {
        if (isEmpty()) return -1;

        return dq[head];
    }
    
    int getRear() {
        if (isEmpty()) return -1;
        int pos = (tail - 1 < 0) ? maxSize - 1 : tail - 1;
        return dq[pos];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == maxSize;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

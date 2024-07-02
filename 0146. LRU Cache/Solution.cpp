class DLL {
public:
    DLL * prev;
    DLL * next;
    int key;
    DLL(int val) {
        key = val;
        prev = NULL;
        next = NULL;
    }  
};

class LRUCache {
public:
    int maxSize;
    unordered_map<int, int> mp;
    unordered_map<int, DLL*> keyPointer;
    DLL * head;
    DLL * tail;
    LRUCache(int capacity) {
        maxSize = capacity;
        head = NULL;
        tail = NULL;
    }
    
    int get(int key) {
        if (mp.count(key) == 0) return -1;
        // add this node to the head now

        DLL * node = keyPointer[key];

        if (node == head) return mp[key];

        if (node == tail) {
            tail = node->prev;
            node->prev->next = NULL;
            node->next = head;
            node->prev = NULL;
            head->prev = node;
            head = node;
        } else {
            DLL * next = node->next;
            DLL * prev = node->prev;
            next->prev = prev;
            prev->next = next;

            node->next = head;
            node->prev = NULL;
            head->prev = node;
            head = node;
        }

        return mp[key];
    }
    
    void put(int key, int value) {
        if (mp.count(key) != 0) {
            mp[key] = value;
            DLL * node = keyPointer[key];

            if (node == head) return;

            if (node == tail) {
                tail = node->prev;
                node->prev->next = NULL;
                node->next = head;
                node->prev = NULL;
                head->prev = node;
                head = node;
            } else {
                DLL * next = node->next;
                DLL * prev = node->prev;
                next->prev = prev;
                prev->next = next;

                node->next = head;
                node->prev = NULL;
                head->prev = node;
                head = node;
            }

            return;
        }

        if (mp.size() >= maxSize) {
            int deleteKey = tail->key;
            DLL * curTail = tail;
            if (head != tail) {
                tail->prev->next = NULL;
                tail = tail->prev;
            } else {
                head = NULL;
                tail = NULL;
            }

            delete curTail;

            mp.erase(deleteKey);
            keyPointer.erase(deleteKey);
        }

        if (!head) {
            head = new DLL(key);
            tail = head;
        } else {
            DLL * newnode = new DLL(key);
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        mp[key] = value;
        keyPointer[key] = head;
    }
private:

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

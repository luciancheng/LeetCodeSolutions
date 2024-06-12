class MyLinkedList {
public:
    int size;
    ListNode * head;
    MyLinkedList() {
        size = 0;
        head = NULL;
    }
    
    int get(int index) {
        if (index >= size) return -1;

        ListNode * cur = head;
        for (int i = 0; i < index; i++) {
            cur = cur->next;
        }
        return cur->val;

    }
    
    void addAtHead(int val) {
        ListNode * cur = new ListNode;
        cur->val = val;
        cur->next = head;
        head = cur;
        size++;
    }
    
    void addAtTail(int val) {
        if (head != NULL) {
            ListNode * cur = head;
            while(cur->next != NULL) {
                cur = cur->next;
            }

            cur->next = new ListNode;
            cur->next->val = val;
            cur->next->next = NULL;
            size++;
        } else {
            addAtHead(val);
        }
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index == 0) {
            addAtHead(val);
        } else {
            ListNode * cur = head;
            for (int i = 0; i < index - 1; i++) {
                cur = cur->next;
            }
            ListNode * newnode = new ListNode;
            newnode->val = val;
            newnode->next = cur->next;
            cur->next = newnode;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index >= size) return;
        if (index > 0) {
            ListNode * cur = head;
            for (int i = 0; i < index-1; i++) {
                cur = cur->next;
            }
            ListNode * temp = cur->next->next;
            delete cur->next;
            cur->next = temp;
        } else {
            head = head->next;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

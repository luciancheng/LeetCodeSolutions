class IntervalNode {
public:
    int start;
    int end;
    IntervalNode * right;
    IntervalNode * left;
    IntervalNode(int x, int y) : start(x), end(y) {
        this->right = NULL;
        this->left = NULL;
    }
};

class MyCalendar {
public:
    IntervalNode * root;
    MyCalendar() {
        root = NULL;
    }
    
    bool book(int start, int end) {
        if (!root) {
            root = new IntervalNode(start, end);
            return true;
        }

        return search(root, start, end);
        
    }

    bool search(IntervalNode * root, int start, int end) {
        if (!root) return false;
        bool res = false;

        int x = root->start;
        int y = root->end;

        if (start >= y) { // we can add
            if (!root->right) {
                root->right = new IntervalNode(start, end);
                return true;
            } else {
                res |= search(root->right, start, end);
            }
        } else if (end <= x) {
            if (!root->left) {
                root->left = new IntervalNode(start, end);
                return true;
            } else {
                res |= search(root->left, start, end);
            }
        } else {
            return false;
        }

        return res;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */

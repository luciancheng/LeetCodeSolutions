class MedianFinder {
public:
    vector<int> maxHeap;
    vector<int> minHeap;
    MedianFinder() {
        maxHeap = vector<int>();
        minHeap = vector<int>();

        make_heap(maxHeap.begin(), maxHeap.end());
        make_heap(minHeap.begin(), minHeap.end());

        // maxheap holds numbers less than the median, with the top begin the closest to the median
        // min heap holds numbers all greater than median, with top begin the number closest to median
        // [maxheap - top]  median  [top - minheap]
    }
    
    void addNum(int num) {
        //cout << num << endl;

        if (maxHeap.size() > 0 && minHeap.size() > 0) {
            int maxTop = maxHeap.front();
            int minTop = -1 *minHeap.front();

            if (num > minTop) {
                minHeap.push_back(-1 * num);
                push_heap(minHeap.begin(), minHeap.end());
            } else {
                maxHeap.push_back(num);
                push_heap(maxHeap.begin(), maxHeap.end());
            }
        } else {
            minHeap.push_back(-1 * num);
            push_heap(minHeap.begin(), minHeap.end());
        }
        

        int sizeMax = maxHeap.size();
        int sizeMin = minHeap.size();

        if (sizeMax - sizeMin > 1) {
            // push top element from max heap to min heap
            int top = maxHeap.front();
            pop_heap(maxHeap.begin(), maxHeap.end());
            maxHeap.pop_back();

            minHeap.push_back(-1 * top);
            push_heap(minHeap.begin(), minHeap.end());
        } else if (sizeMin - sizeMax > 1) {
            // push top element from minHeap to maxheap
            int top = -1 * minHeap.front();
            pop_heap(minHeap.begin(), minHeap.end());
            minHeap.pop_back();

            maxHeap.push_back(top);
            push_heap(maxHeap.begin(), maxHeap.end());
        }
    }
    
    double findMedian() {
        if ((minHeap.size() + maxHeap.size()) % 2 == 0) {
            return (-1 * minHeap.front() + maxHeap.front()) / float(2);
        } else {
            if (minHeap.size() > maxHeap.size()) {
                return -1 * minHeap.front();
            } else {
                return maxHeap.front();
            }
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

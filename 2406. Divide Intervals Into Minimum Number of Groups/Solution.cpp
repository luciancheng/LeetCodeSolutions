class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        // be greedy with how we add into groups

        sort(intervals.begin(), intervals.end());

        int n = intervals.size();

        vector<int> heap; // store the endings of each interval group and be greedy, try and match with the lowest interval ending first, if that doesnt even work, then it wont work for other and make a new entry
        for (int i = 0; i < n; i++) {
            vector<int> interval = intervals[i];
            int left = interval[0];
            int right = interval[1];

            if (!heap.empty() && left > -heap[0]) {
                pop_heap(heap.begin(), heap.end());
                heap.pop_back();
            } 

            heap.push_back(-right);
            push_heap(heap.begin(), heap.end());

        }

        return heap.size();
    }
};

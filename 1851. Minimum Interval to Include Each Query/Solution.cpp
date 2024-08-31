class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        sort(intervals.begin(), intervals.end());

        vector<pair<int, int>> queriesModified;
        for (int i = 0; i < queries.size(); i++) {
            queriesModified.push_back({queries[i], i});
        }

        sort(queriesModified.begin(), queriesModified.end());

        // C++ uses max heap, so add a negative sign
        vector<pair<int, int>> minHeap;
        int intervalIdx = 0;
        for (const auto & [query, index] : queriesModified) {
            // add new queries
            while (intervalIdx < intervals.size() && intervals[intervalIdx][0] <= query) {
                minHeap.push_back({-(intervals[intervalIdx][1] - intervals[intervalIdx][0] + 1), intervals[intervalIdx][1]});
                push_heap(minHeap.begin(), minHeap.end());
                intervalIdx++;
            }
            // remove old queries
            while (!minHeap.empty() && minHeap[0].second < query) {
                pop_heap(minHeap.begin(), minHeap.end());
                minHeap.pop_back();
            }

            // smallest query is at the top of the heap
            if (minHeap.empty()) queries[index] = -1;
            else queries[index] = -minHeap[0].first;
        }

        return queries;
    }
};

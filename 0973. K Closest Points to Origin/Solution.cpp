class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // use a max heap of size k
        // the k closest points will be the remaining points in the heap if we maintain it of size k and pop whenever it exceeds k
        // top element will be the kth furthest distance from the origin
        // smallest distances will be pushed down the heap

        vector<pair<float, int>> heap;
        make_heap(heap.begin(), heap.end());

        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];

            float dist = sqrt(pow(x, 2) + pow(y, 2));

            heap.push_back({dist, i});
            push_heap(heap.begin(), heap.end());

            if (heap.size() > k) {
                pop_heap(heap.begin(), heap.end());
                heap.pop_back();
            }
        }
        vector<vector<int>> ans;

        for (auto i : heap) {
            ans.push_back(points[i.second]);
        }

        return ans;
    }
};

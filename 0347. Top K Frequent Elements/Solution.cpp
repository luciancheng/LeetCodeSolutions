class Compare {
    public:
       bool operator()(vector<int> & a, vector<int>& b){
            return b[1] > a[1]; // if second is bigger than first, the this sorts in decreasing order
            // if first is bigger than second, sorts in ascending order
      }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> counter;
        for (int i : nums) counter[i]++;

        priority_queue<vector<int>, vector<vector<int>>, Compare> pq; // type we want to store, the container, the comparator

        for (auto & i : counter) {
            vector<int> cur = {i.first, -1 * i.second}; // if we use a negative, stores in pretty much descending order
            pq.push(cur);
            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            ans.push_back(pq.top()[0]);
            pq.pop();
        }

        return ans;



    }
};

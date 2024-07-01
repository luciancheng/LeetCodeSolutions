class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> max;
        vector<int> ans;
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            while (!max.empty() && max.back() < nums[r]) {
                max.pop_back();
            }
            max.push_back(nums[r]);

            if (r - l + 1 > k) {
                if (nums[l] == max.front()) {
                    max.pop_front();
                }
                l++;
            }

            if (r - l + 1 == k) ans.push_back(max.front());
        }

        return ans;
    }
};

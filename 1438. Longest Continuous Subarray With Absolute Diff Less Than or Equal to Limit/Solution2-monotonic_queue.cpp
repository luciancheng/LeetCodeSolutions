class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int longest = 0;
        // maxQ monotonic decreasing, minQ monotonic inc, front will get us the current max and min of the subarray we are checking
        deque<int> maxQ, minQ;

        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            // need minQ to be monotonic increasing
            while (!minQ.empty() && nums[r] < minQ.back()) {
                minQ.pop_back();
            }
            // need maxQ to be monotnic decreasing;
            while (!maxQ.empty() && nums[r] > maxQ.back()) {
                maxQ.pop_back();
            }

            // push the new element onto the qs or else we dont acocunt for the new number we just added
            maxQ.push_back(nums[r]);
            minQ.push_back(nums[r]);

            // while the max-min is too big, just pop from the front and move l upwards
            while (abs(maxQ.front() - minQ.front()) > limit) {
                int remove = nums[l];

                if (maxQ.front() == remove) {
                    maxQ.pop_front();
                }

                if (minQ.front() == remove) {
                    minQ.pop_front();
                }

                l++;
            }

            // take the longest by just doing r - l + 1
            longest = max(longest, r - l + 1);
        }

        return longest;
    }
};

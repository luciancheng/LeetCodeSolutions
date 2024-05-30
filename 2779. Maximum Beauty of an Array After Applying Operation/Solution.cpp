class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        // brute force, iterate through all numbers and check if the ranges are in line
        if (nums.size() == 1) return 1;
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = 1;
        int maxSize = 1;
        int curSize = 1;

        while (right < nums.size()) {
            int minimum = nums[left];
            int maximum = nums[right];
            curSize = right - left + 1;

            if (minimum + k >= maximum - k) {
                maxSize = max(maxSize, curSize);
                right++;
            } else {
                left++;
                right++;
            }
            
        }

        return maxSize;
    }
};

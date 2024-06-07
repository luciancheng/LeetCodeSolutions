class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxNum = INT_MIN;

        for (int num : nums) {
            maxNum = max(maxNum, num);
        }
        long long numSubArrays = 0;
        int freq = 0;
        int start = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxNum) freq++;
            while (freq == k) {
                if (nums[start] == maxNum) freq--;
                start++;
            }
            numSubArrays += start;
        }
        return numSubArrays;
    }
};

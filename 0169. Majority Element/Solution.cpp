class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curNum = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != curNum) {
                count--;
            } else {
                count++;
            }

            if (count < 0) {
                count = 1;
                curNum = nums[i];
            }
        }
        return curNum;
    }
};

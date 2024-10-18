class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        // max bitwise OR is just two numbers with the highest bit of 1 available , since ORs will take a 1 from either
        // find what the maximum bitwise or of a subset is
        // then find how many subsets of nums can have that bitwise OR
        // max bitwise OR would just be bitwise ORing all elements in the list together since bit wise OR will only every either stay the same or increase the max

        // find the max bitwise OR, just OR all the elemtns together since if there is a 1 in a bit spot, it will carry through to the end
        int maxOR = 0;
        for (const int & i : nums) {
            maxOR |= i;
        }

        // do recursion to count for number of max bitwise or subsets

        return recur(nums, 0, maxOR, 0);

    }

    int recur(vector<int> & nums, int idx, int maxOR, int curOR) {
        // count how many unique ways we can get to the end of the array that has a bitwise OR equal to the maxOR
        if (idx == nums.size() && maxOR == curOR) return 1; // if we reach the end and have maxOR == curOR then its good
        if (idx == nums.size()) return 0;

        int res = 0;
        // skip current one for bit
        res += recur(nums, idx + 1, maxOR, curOR);

        // take current one
        curOR |= nums[idx];
        res += recur(nums, idx + 1, maxOR, curOR);

        return res;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // brute force is to check all pairs of numbers
        // another method is sort then iterate, but not allowed to modify nums

        // numbers will be in range [1, n], and have n+1 items
        // one number will appear twice or more, all others will appear just once
        // can use tortoise and hare solution to look for cycles
        int n = nums.size(); // range of numbers from [1,n]

        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        int slow2 = nums[0];

        while (slow != slow2) {
            slow = nums[slow];
            slow2 = nums[slow2];
        }

        return slow;
    }

};

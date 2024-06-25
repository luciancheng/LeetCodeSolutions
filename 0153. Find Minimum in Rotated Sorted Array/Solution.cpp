class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int mid;

        while (l <= r) {
            mid = (l + r) / 2;

            int midLower = (mid - 1 < 0) ? n - 1 : mid - 1;
            if (nums[midLower] < nums[mid] && nums[mid] > nums[(mid + 1) % n]) {
                return nums[(mid + 1) % n];
            } else if (nums[midLower] > nums[mid] && nums[mid] < nums[(mid + 1) % n]) {
                return nums[mid];
            }

            if (nums[l] > nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return nums[mid];
    }
};

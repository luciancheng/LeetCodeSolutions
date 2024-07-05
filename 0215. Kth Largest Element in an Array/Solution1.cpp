class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int target = n - k;
        return quickSelect(0, n - 1, nums, target);
    }

    int quickSelect(int l, int r, vector<int> & nums, int target) {
        int pivot = nums[r];
        int p = l;

        for (int i = l; i < r; i++) {
            if (nums[i] <= pivot) {
                swap(nums[p], nums[i]);
                p++;
            }
        }
        swap(nums[p], nums[r]);

        if (p > target) {
            return quickSelect(l, p - 1, nums, target);
        } else if (p < target) {
            return quickSelect(p + 1, r, nums, target);
        } else {
            return nums[p];
        }
    }

};

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // sorted, and unique numbers since it strictly increasing
        int n = arr.size();

        int l = 0;
        int r = n - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            int missing = arr[mid] - (mid + 1);

            if (missing < k) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (r < 0) return k;
        return arr[r] + (k - (arr[r] - r - 1));
    }
};

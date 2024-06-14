class Solution {
public:
    int pivotInteger(int n) {
        int l = 0;
        int r = n;

        int totalSum = n*(n+1)/2;

        while (l <= r) {
            int mid = (l + r) / 2;

            int leftSum = mid * (mid + 1) / 2;
            int rightSum = totalSum - (mid-1)*mid/2;

            if (leftSum == rightSum) {
                return mid;
            }

            if (rightSum > leftSum) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }

        }

        return -1;
    }
};

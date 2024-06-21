class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() <= 2) return 0;

        int l = 0;
        int r = height.size() - 1;
        int maxL = height[l];
        int maxR = height[r];
        int total = 0;

        while (l < r) {
            if (maxR < maxL) {
                r--;
                maxR = max(maxR, height[r]);
                total += max(min(maxL, maxR) - height[r], 0);
            } else {
                l++;
                maxL = max(maxL, height[l]);
                total += max(min(maxL, maxR) - height[l], 0);
            }
        }

        return total;
    }
};

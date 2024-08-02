class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int numOnes = 0;
        for (const int & i : nums) if (i) numOnes++;
        if (numOnes == 0) return 0;

        int n = nums.size();
        int l = 0;
        int numSwaps = INT_MAX;
        int curOnes = 0;
        for (int r = 0; r < n + numOnes - 1; r++) {
            if (nums[r % n]) curOnes++;

            if (r - l + 1 > numOnes) {
                if (nums[l]) curOnes--;
                l++;
            }
            if (r - l + 1 == numOnes) {
                numSwaps = min(numSwaps, numOnes - curOnes);
            }
        }
        return numSwaps;
    }
};

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        // running xor prefix sum, then just go from the back
        // find a k that is less than maximumbit, 2^maximumbit
        // for an xor, if we ahve the same set bit, it turns to 0, we need differing bits,
        // find a k value that has the complete opposite set bits as the prefix sum of the total XOR of everyhting inthe array
        for (int i = 1; i < n; i++) {
            nums[i] ^= nums[i - 1]; // running xor sum
        }

        // if maximubit = 3, k < 2^3 = 8 -> ie, we have 3 set bits available
        // maximumbit is the number of set bits we have to work with

        vector<int> ans;

        for (int i = n - 1; i >= 0; i--) {
            int queryans = 0;

            int curXOR = nums[i];

            // find the complete opposite set bits that curXOR has that has at most maximumBits bits

            for (int j = 0; j < maximumBit; j++) {
                // get the bit
                int curbit = (curXOR >> j) & 1;

                // flip the bit
                curbit ^= 1;

                // place the bit
                queryans |= (curbit << j);
            }

            ans.push_back(queryans);
        }

        return ans;
    }
};

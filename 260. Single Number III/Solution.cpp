class Solution {
public:
    bool hasOne(int num, int pos) {
        return num >> pos & 1;
    }
    vector<int> singleNumber(vector<int>& nums) {
        if (nums.size() == 2) return nums;
        int totalXOR = 0;
        for (int num : nums) {
            totalXOR ^= num; // the numbers that appear twice, will ahve xor that cancel out to 0, so the final xor value will be = to the xor of the 2 numbers we want
        }
        // now if we find one of these numbers, we can find the other by just taking the xor
        // based on the xor, if we can find which position in the bits there is a 1, that means it belongs to one of the 2 numbers
        // we can just xor everything that has a 1 at that bit position to find that number

        int pos = 0;
        for (int i = 0; i < 32; i++) {
            while (!hasOne(totalXOR, pos)) pos++;
        }

        int num1 = 0;
        for (int num : nums) {
            if (hasOne(num, pos)) {
                num1 ^= num;
            }
        }

        return {num1, totalXOR ^ num1};
    }
};

class Solution {
public:
    int findComplement(int num) {
        int mask = 1;
        int k = log2(num);
        for (int i = 1; i < k; i++) {
            mask |= mask << 1;
        }
        return ~num & mask;
    }
};

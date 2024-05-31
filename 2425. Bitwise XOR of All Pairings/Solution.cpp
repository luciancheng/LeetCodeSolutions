class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int bitXorNums2 = nums2[0];
        int sizeNums2 = nums2.size();
        int bitXorTotal;
        for (int j = 1; j < nums2.size(); j++) {
            bitXorNums2 ^= nums2[j];
        }

        if (sizeNums2 % 2 == 0) { 
            bitXorTotal = 0 ^ bitXorNums2;
        } else {
            bitXorTotal = nums1[0] ^ bitXorNums2;
        }

        for (int i = 1; i < nums1.size(); i++) {
            if (sizeNums2 % 2 == 0) { // even number of xor operations on each nums2
                bitXorTotal ^= 0 ^ bitXorNums2;
            } else {
                bitXorTotal ^= nums1[i] ^ bitXorNums2;
            }
        }

        return bitXorTotal;
    }
};

class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1) return '0'; // base case for n = 1

        int size = pow(2, n) - 1;
        int mid = size / 2 + 1;

        if (k < mid) {
            // anything before the pivot mid point is just going to be the same bit as the n - 1 term at the same k position so we can look there instead
            return findKthBit(n - 1, k);
        } else if (k > mid) {
            // find the flipped bit the same distance from the start as k is to the end
            char res = findKthBit(n - 1,  mid - (k - mid));
            // flip the bit
            return (res == '0') ? '1' : '0';
        }
        // we are at the mid point
        return '1'; 
    }
};

class Solution {
public:
    bool judgeSquareSum(int c) {
        long r = pow(c, 0.5);
        long l = 0;

        while (l <= r) {
            long long curTotal = l*l + r*r;

            if (curTotal == c) {
                return true;
            }

            if (curTotal > c) {
                r--;
            } else {
                l++;
            }
        }
        
        return false;
    }
};

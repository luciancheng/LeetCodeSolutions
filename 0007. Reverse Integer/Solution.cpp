class Solution {
public:
    int reverse(int x) {
        int newNum = 0;
        bool isNegative = x < 0;

        x = abs(x);

        while(x) {
            if (newNum > INT_MAX / 10) return 0;
            newNum = 10 * newNum + x % 10;
            x /= 10;
        }
        return isNegative ? -newNum : newNum;
    }
};

class Solution {
public:
    bool containZero(int n) {
        while (n > 0) {
            int check = n % 10;
            if (check == 0) {
                return true;
            }
            n = n / 10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;

        for (int i = 1; i < n/2+1; i++) {
            if (!containZero(i) && !containZero(n-i)) {
                return {i, n-i};
            }
        }

        return ans;
    }
};

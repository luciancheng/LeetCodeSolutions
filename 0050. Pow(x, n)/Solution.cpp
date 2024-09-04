class Solution {
public:
    double myPow(double x, int n) {
        double res = recur(x, abs(n));
        if (n < 0) return 1/res;
        return res;
    }

    double recur(double x, int n) {
        if (n == 1) return x;
        if (n == 0) return 1;

        double res = recur(x, n / 2);

        if (n % 2 == 0) {
            return res * res;
        }
        return res * res * x;
    }
};

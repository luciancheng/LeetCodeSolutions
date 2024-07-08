class Solution {
public:
    int findTheWinner(int n, int k) {
        int i = helper(n, k);
        return i + 1;
    }

    int helper(int n, int k) {
        if (n == 1) return 0;
        return (helper(n - 1, k) + k) % n;
    }
};

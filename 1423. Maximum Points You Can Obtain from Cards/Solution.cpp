class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int l = n - k;
        int cur = 0;
        int maxPoints = 0;
        for (int r = n - k; r < (n - k + 2*k); r++) {
            cur += cardPoints[r % n];
            if (r - l >= k) {
                cur -= cardPoints[l % n];
                l++;
            }
            maxPoints = max(maxPoints, cur);
        }
        return maxPoints;
    }
};

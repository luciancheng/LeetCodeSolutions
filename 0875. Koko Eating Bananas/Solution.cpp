class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // max she k she can eat would just be the max element since if she eats a pile, she cant eat more but she can chew awat at the pile,
        // least amount of banances she could eat is 1 per hour
        int l = 1;
        int r = 1e9; // start at 1e9 since its better than iterating through array
        int k = INT_MAX;

        while (l <= r) {
            int mid = (l + r) / 2; // mid will be the speed of banana eating we are currently checking
            
            long hours = test(mid, piles);
            if (hours <= h) {
                r = mid - 1;
                k = min(k, mid);
            } else {
                l = mid + 1;
            }
        }
        return k;
    }

    // helper function to see if she can eat the bananas within the given time using a speed of mid

    long test(int speed, vector<int> piles) {
        int n = piles.size();
        long hours = 0;
        for (int i = 0; i < n; i++) {
            hours += ceil(double(piles[i]) / double(speed));
        }
        return hours;
    }
};

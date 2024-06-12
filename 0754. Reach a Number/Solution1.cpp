class Solution {
public:
    int reachNumber(int target) {
        long long longtarget = abs(target);
        int n = ceil((-1 + sqrt(8 * longtarget))/2); // find starting N

        bool found = false;
        while (!found) {
            int L = 1;
            int R = n;
            long long sumN = (n*(n+1)/2);
            if (sumN == longtarget) return n;

            while (L <= R) {
                int mid = (L + R) / 2;
                int curSum = sumN - 2*mid;

                if (curSum == longtarget) {
                    return n;
                }
                if (curSum < longtarget) {
                    R = mid - 1;
                } else {
                    if ((curSum - longtarget) % 2 == 0 && (curSum - longtarget) < mid * 2) return n;
                    L = mid + 1;
                }
            }
            n++;
        }


        return n;
    }
};

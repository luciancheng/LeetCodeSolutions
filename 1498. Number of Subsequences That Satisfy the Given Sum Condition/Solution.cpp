class Solution {
public:
    int mod = 1e9 + 7;
    long long modPow(int base, int exp, int mod) {
        long long result = 1;
        long long baseMod = base % mod;
        
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * baseMod) % mod;
            }
            baseMod = (baseMod * baseMod) % mod;
            exp /= 2;
        }
        
        return result;
    }
    int numSubseq(vector<int>& nums, int target) {
        // always have option to take or skip
        sort(nums.begin(), nums.end()); // can do sliding window since this is all positive numbers
        int n = nums.size();

        long long ans = 0;

        // have an anchor point and find out how many subarrays that have a min at i are valid by binary searching to find the largest index that makes it still valid

        for (int i = 0; i < n; i++) {
            int l = i;
            int r = n - 1;
            int highestidx = i;

            if (nums[i]*2 > target) break; // no more to find

            while (l <= r) {
                int mid = (l + r) / 2;

                if (nums[i] + nums[mid] <= target) {
                    highestidx = max(highestidx, mid);
                    l = mid + 1; // look in a higher range after saivng the mid point
                } else {
                    r = mid - 1; // look in a lower range
                }
            }

            ans = (ans +  modPow(2, highestidx - i, mod)) % mod;
        }

        return ans;
        
    }

};

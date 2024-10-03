class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        // sum of whole array must be divisble by p, -1 if its not possible, return length of smallest usb array to remove, want to keep as much as possible

        // find the remainders to p for each element
        vector<int> arr;
        long long sum = 0;
        for (const int & i : nums) {
             // get the sum of all elements to determine the target remainder we need to remove
             sum += i;
        }
        if (sum % p == 0) return 0;
        int target = sum % p;

        int minSize = INT_MAX;
        unordered_map<int, int> mp;
        mp[0] = -1; // set the inital remainder before we do anything, remainder at i = -1 is 0
        long long prefixSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            int rem = prefixSum % p;

            // find comp that allows us to remove target ending at index i
            // comp will give us the value needed to subtract ,meaning from the i at comp to i current, we remove a suubarray with sum and remainder target
            int comp = (prefixSum - target) % p; // comp tells us what number we r looking for in order to remove a subarray with sum that has remainder of target ending at i

            // check if that comp has been visited, if it has then get the min of trhe current size and the new one
            if (mp.count(comp) != 0) {
                minSize = min(minSize, i - mp[comp]);
            }

            // set the current remainder of the prefix sum to i, save only the rightmost index since that will be where the smallest subarray could be if multiple remainders exist
            mp[rem] = i;
        } 

        return (minSize == nums.size()) ? -1 : minSize;
    }
};

class Solution {
public:
    unordered_map<int, vector<int>> mp;
    Solution(vector<int>& nums) {
        // cant sort because we need to output the index, unless we sort it with index as a pair
        // hash the values of nums into a hashmap mapped to a list that contains the indices of it, then call the rand function to randomly pic one
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i); // map the value to a list of indeices
        }
    }
    
    int pick(int target) {
        // randomly pick from target
        // use rand() function

        int idx = rand() % mp[target].size(); // get a number between [0, n - 1]
        return mp[target][idx];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            getDigits(num, ans);
        }

        return ans;
    }

    void getDigits(int n, vector<int> & ans) {
        if (n >= 10) {
            getDigits(n/10, ans);
        }
        ans.push_back(n % 10);
    }
};

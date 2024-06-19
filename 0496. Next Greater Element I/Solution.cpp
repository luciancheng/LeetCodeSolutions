class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = i;
        }
        for (int i : nums1) {
            int startIdx = mp[i];
            bool checking = true;
            for (int j = startIdx; j < nums2.size(); j++) {
                if (nums2[j] > i) {
                    ans.push_back(nums2[j]);
                    checking = false;
                    break;
                }
            }
            if (checking) ans.push_back(-1);
        }

        return ans;
    }
};

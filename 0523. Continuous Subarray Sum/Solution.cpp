class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // 0 is a multiple of k, the sum % 6 = 0
        unordered_map<int,int> m={{0,-1}};
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(!m.count(rem)) m[rem]=i;
            // if we ever encounter the same remainer, that means between now and the first time we saw it, there was a sum that was added equivalent to n*k
            else if(i-m[rem]>1) return true;
        }
        return false;
    }
};

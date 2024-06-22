class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        // shrink the sliding window when we ahve k odds, until both l and r are an odd num
        // add up how many times we shrunk to total and to the multiplier
        // if we encounter an extra odd, then result multiplier to 0, and 1 and add more to multiplier 
        int total = 0;
        int l = 0;
        int mult = 1;
        int curOdd = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] % 2 != 0) {
                curOdd++;
            } 
            if (curOdd > k) {
                l++;
                mult = 1;
                curOdd--;
            }

            if (curOdd == k && nums[l] % 2 == 0) {
                while(curOdd == k && nums[l] % 2 == 0) {
                    mult++;
                    total++;
                    l++;
                }
                total++;
            } else if (curOdd == k) {
                total += mult;
            } 
        }

        return total;
    }
};

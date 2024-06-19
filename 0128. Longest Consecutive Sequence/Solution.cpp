class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int i : nums) s.insert(i);
        int longest = 0;

        for (int i : nums) {
            if (s.count(i-1) == 0) { // start counting at the lowest number of the sequence, for ex, if 1, 2, 3, then we start counting at 1 since 3-1 is there and 2-1 is already in the set so it wouldnt yield the best answer
                int cur = i;
                int count = 0;
                while (s.count(cur) != 0) {
                    count++;
                    cur++;
                }
                longest = max(longest, count);

            }
        }
        return longest;
    }
};

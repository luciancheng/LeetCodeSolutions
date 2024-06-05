class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int oddFreq = 0;
        for (char i : s){ // make a counter for each unique elemnt , can have at max 1 character with an odd freq
            mp[i]++;
            if (mp[i] % 2 == 0) {
                oddFreq--;
            } else {
                oddFreq++;
            }
        } 

        if (oddFreq > 1) return s.size() - oddFreq + 1;
        return s.size();
    }
};

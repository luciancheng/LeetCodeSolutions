class Solution {
public:
    int findTheLongestSubstring(string s) {
        // have a an array of size of s which at each index has a number which corresponds to if that number has seen an even number of times
        // a,e,i,o,u => LSB 00000 MSB

        // then we know there has been equal number of vowels seen if two numbers are the same
        // use a hashmap to keep track of the first time we see a number {seen number : index} for calculations

        unordered_map<int, int> mp;

        mp[0] = -1; // we start off with 0 initially;

        int bitreg = 0;
        int ans = 0;
        unordered_map<char, int> vowels = {{'a', 0}, {'e', 1}, {'i', 2}, {'o', 3}, {'u', 4}};
        for (int i = 0; i < s.size(); i++) {
            char curLetter = s[i];

            if (vowels.count(curLetter) != 0) { // this letter is a vowel
                int bitshift = vowels[curLetter];
                // flip bit there
                bitreg ^= (1 << bitshift);
            }

            if (mp.count(bitreg) != 0) {
                ans = max(ans, i - mp[bitreg]);
            } else {
                mp[bitreg] = i;
            }

        }

        return ans;
    }
};

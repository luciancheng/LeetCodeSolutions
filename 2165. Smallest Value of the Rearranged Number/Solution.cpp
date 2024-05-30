class Solution {
public:
    long long smallestNumber(long long num) {
        long long ans = 0;
        unordered_map<int, int> mp; // counter for diff digits and their freq
        bool neg = false;

        if (num < 0) {
            neg = true;
            num = abs(num);
        }

        // get num of freq
        while(num > 0) {
            int temp = num % 10;
            mp[temp]++;
            num /= 10;
        }

        // minimize num if +ve
        //  first start with smallest non 0 digit
        //  add all zeroes
        //  add all remaining numbers in increasing order
        if (!neg) {
            for (int i = 1; i < 10; i++) {
                if (mp[i] != 0) {
                    ans = ans * 10 + i;
                    mp[i]--;
                    break;
                }
            }
            while(mp[0] != 0) {
                ans = ans * 10;
                mp[0]--;
            }

            for (int i = 0; i < 10; i++) {
                while(mp[i] != 0) {
                    ans = ans * 10 + i;
                    mp[i]--;
                }
            }
        }

        // minimuze num if -ve
        //  add digits in decreasing order then turn it negative

        else {
            for (int i = 9; i >= 0; i--) {
                while(mp[i] != 0) {
                    ans = ans * 10 + i;
                    mp[i]--;
                }
            }
            ans = ans * (-1);
        }

        return ans;
    }
};

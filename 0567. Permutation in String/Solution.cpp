class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> arr1(26, 0);
        int lens1 = s1.size();

        for (char i : s1) arr1[i - 'a']++;

        int tempsize = lens1;

        int l = 0;
        int lenS2 = s2.size();
        vector<int> newArr(26, 0);
        for (int r = 0; r < lenS2; r++) {
            newArr[s2[r] - 'a']++;
            if (r - l + 1 > lens1) {
                newArr[s2[l] - 'a']--;
                l++;
            }

            if (checkArr(arr1, newArr)) return true;
        }

        return false;
    }

    bool checkArr(const vector<int> & arr1, const vector<int> & arr2) {
        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] != arr2[i]) return false;
        }
        return true;
    }
};

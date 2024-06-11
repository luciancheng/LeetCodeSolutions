bool compare(int a, int b, unordered_map<int,int> mp) {
    if (mp.count(a) == 0 && mp.count(b) == 0) {
        return a < b;
    }

    if (mp.count(a) == 0) {
        a = INT_MAX;
    } else {
        a = mp[a];
    }
    if (mp.count(b) == 0) {
        b = INT_MAX;
    } else {
        b = mp[b];
    }
    return a < b;
}

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;

        for (int i = 0; i < arr2.size(); i++) {
            mp[arr2[i]] = i; // get relative position of items
        }

        sort(arr1.begin(), arr1.end(), [mp](int a, int b){ return compare(a,b,mp);});

        return arr1;
    }
};

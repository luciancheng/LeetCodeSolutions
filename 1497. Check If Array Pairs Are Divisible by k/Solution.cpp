class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size(); // arr will always be even length
        // make n/2 pairs of numbers, the sum of each pair should be divisible by k, maybe dp
        // if all pairs have a val of a % k = 0, then the sum of all numbers in the array should also be % k = 0
        // maybe use dp for this and try all possible combinations
        // maybe prefix sum
        // maybe sort and be greedy, since it will most likely have to be opposite numbers that will make up the total

        
        //((x % k) + k) % k
        
        vector<int> arr2;

        for (const int & i : arr) {
            arr2.push_back(((i % k) + k) % k); // for each element, find how much it takes up to go to k, and then do k - val to find the difference needed to reacxh k
        }

        unordered_map<int, int> mp;

        for (const int & i : arr2) {
            // 0 must be grouped with 0s
            int diff = k - i;
            if (diff == k) diff = 0;

            if (mp.count(diff) == 0) { // diff isnt presnet, add the i to the saved mp
                mp[i]++;
            } else {
                if (--mp[diff] == 0) mp.erase(diff);
            }
        }

        return mp.empty();
    }
};

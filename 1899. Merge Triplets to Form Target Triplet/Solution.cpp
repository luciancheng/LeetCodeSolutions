class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<bool> canMake(3, false);
        for (const auto & triplet : triplets) {
            bool stopCheck = false;
            for (int i = 0; i < 3; i++) {
                // check each pair of indices
                // a triplet would be useful if the numbers are at i is less than its corresponding i in target, 
                //cant exceed target[i] since our operations are taking the max, meaning we can never go back down
                // ensure all values in triplet are less than or equal to the corresponding i in target
                if (target[i] < triplet[i]) {
                    stopCheck = true;
                    break;
                } 
            }
            
            if (stopCheck) continue;

            for (int i = 0; i < 3; i++) {
                if (target[i] == triplet[i]) {
                    canMake[i] = true;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            if (!canMake[i]) return false;
        }
        return true;
    }
};

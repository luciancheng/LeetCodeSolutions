class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // max number of fleets will be the number of cars we have
        // each time a car comes up to another fleet, the number of fleets -= 1
        vector<vector<int>> arr;
        for (int i = 0; i < position.size(); i++) {
            arr.push_back({position[i], speed[i]});
        }
        sort(arr.begin(), arr.end());
        stack<float> s;

        for (int i = arr.size() - 1; i >= 0; i--) {
            float eta = float((target - float(arr[i][0])) / float(arr[i][1]));
            if (s.empty() || eta > s.top()) {
                s.push(eta);
            }
        }

        return s.size();
    }
};

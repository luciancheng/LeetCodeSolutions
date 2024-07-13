class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        stack<vector<int>> st;
        unordered_map<int, int> mp;
        vector<vector<int>> robots;
        for (int i = 0; i < n; i++) {
            mp[positions[i]] = healths[i];
            robots.push_back({positions[i], directions[i]});
        }
        sort(robots.begin(), robots.end());

        for (auto robot : robots) {
            int pos = robot[0];
            char dir = robot[1];
            int health = mp[pos];

            while (!st.empty() && health > 0 && dir == 'L' && st.top()[1] == 'R') {
                vector<int> back = st.top();
                int prevHealth = back[0];

                if (prevHealth > health) {
                    // kill current robot
                    // deteremine if we should remove current robot
                    
                    health = 0;
                    if (prevHealth > 1) {
                        st.top()[0]--;
                        mp[st.top()[2]]--;
                    } else {
                        mp[st.top()[2]] = 0;
                        st.pop();
                    }
                } else if (prevHealth < health) {
                    // kill the robot before
                    // wont add this robot to stack if it has 0 hp
                    mp[st.top()[2]] = 0;
                    st.pop();
                    health--;
                } else {
                    // remove both robots
                    mp[st.top()[2]] = 0;
                    st.pop();
                    health = 0;
                }
            }

            if (health > 0) {
                st.push({health, dir, pos});
                mp[pos] = health;
            }
            else mp[pos] = 0;
        }

        vector<int> ans;
        for (int i : positions) {
            if (mp[i] > 0) {
                ans.push_back(mp[i]);
            }
        }
        return ans;
    }
};

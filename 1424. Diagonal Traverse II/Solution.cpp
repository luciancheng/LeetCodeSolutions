class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        // only goes towards top right, i, j => (-1, +1)
        // each row start will be i = 0; or j = n which is the left side or the bototm depending on where we are
        vector<int> ans;

        // each diagonal will have the same sum of i + j
        // for each element, store its i + j sum, as well as its row and sort them all based off this criteria then just add them all into ans

        vector<vector<int>> organized;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                organized.push_back({i + j, -i, nums[i][j]});
            }
        }

        sort(organized.begin(), organized.end());

        for (const vector<int> & i : organized) {
            ans.push_back(i[2]);
        }

        return ans;
    }
};

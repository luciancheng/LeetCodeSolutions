class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();

        sort(skill.begin(), skill.end());

        int targetSum = skill[0] + skill[n-1];
        long long chemistry = skill[0] * skill[n-1];
        int left = 1, right = n-2;
        while(left < right) {
            if (skill[left] + skill[right] == targetSum) {
                chemistry += skill[left] * skill[right];
                left++;
                right--;
            } else {
                return -1;
            }
        }
        return chemistry;
    }
};

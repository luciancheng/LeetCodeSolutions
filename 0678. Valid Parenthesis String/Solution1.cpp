class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0;
        int leftMax = 0;

        for (const char & i : s) {
            if (i == '(') {
                leftMin++;
                leftMax++;
            } else if (i == ')') {
                leftMin = max(0, leftMin - 1);
                leftMax--;
            } else{
                leftMin = max(0, leftMin - 1);
                leftMax++;
            }

            if (leftMax < 0) return false;
        }

        return (leftMin == 0);
    }

};

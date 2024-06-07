class Solution {
public:
    int maxDepth(string s) {
        int counter = 0;
        int depth = 0;
        for (char i : s) {
            if (i == '(') {
                counter++;
                depth = max(depth, counter);
            }
            if (i == ')') {
                counter--;
            }
        }

        return depth;
    }
};

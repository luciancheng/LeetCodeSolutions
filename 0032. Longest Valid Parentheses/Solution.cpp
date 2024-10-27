class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0;
        int n = s.size();
        stack<int> st;

        // if count ever goes below 0, stop counting 
        // if we end with a count > 0, then just take the max size we got and subtract the count of opening brakcets from it
        st.push(-1);
        for (int i = 0; i < n; i++) {
            // find the longest series of valid brackets by whenever we pop out the valid ones, we find the diff
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                } 

                ans = max(ans, i - st.top());
            }
        }

        return ans;
    }
};

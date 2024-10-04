class Solution {
public:
    string minRemoveToMakeValid(string s) {
        // cannot have ) on its own
        // if we have a (, it must eventually come with a corresponding )
        // the number of ) can never be greater than (

        stack<int> st;

        // find all brackets that are no good, all brakets that are no good will be the remaining ones in st
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char cur = s[i];
            // see if it fits on the stack
            // all remaining brackets in the stack a the end should be (
            // if we encounter a ) with the stack being empty, then automatically add the index to the bad pile

            if (cur == '(') {
                st.push(i); 
            } else if (cur == ')') {
                if (st.empty()) {
                    s[i] = '.';
                } else {
                    st.pop();
                }
            }
        }

        while (!st.empty()) {
            int i = st.top();
            st.pop();
            s[i] = '.';
        }
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '.') ans += s[i];
        }
        return ans;
    }
};

class Solution {
public:
    string reverseParentheses(string s) {
        vector<char> st;
        for (char i : s) {
            if (i == ')') {
                string cur = "";
                while (st.back() != '(') {
                    cur.push_back(st.back());
                    st.pop_back();
                }
                st.pop_back();
                for (char j : cur) {
                    st.push_back(j);
                }
            } else {
                st.push_back(i);
            }
        }
        string ans;
        for (char i : st) {
            ans.push_back(i);
        }
        return ans;
    }
};

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        // find which combination has higher priority for what we want to make
        int ans = 0;
        string bestCombo = "ba";
        int best = y;
        int alt = x;

        if (x > y) {
            bestCombo = "ab";
            best = x;
            alt = y;
        }

        stack<char> st;
        int a = 0;
        int b = 0;
        for (char i : s) {
            if (i != 'a' && i != 'b') {
                ans += min(a, b) * alt;
                a = 0;
                b = 0;
            } else {
                if (i == 'a') a++;
                if (i == 'b') b++;

                if (!st.empty()) {
                    string check = "";
                    check += st.top();
                    check += i;
                    if (check == bestCombo) {
                        st.pop();
                        ans += best;
                        a--;
                        b--;
                        continue;
                    } 
                } 
            }
            st.push(i);
        }
        ans += min(a, b) * alt;
        return ans;
    }
};

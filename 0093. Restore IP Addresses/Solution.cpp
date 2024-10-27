class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        dfs(s, 0, "", ans, 0);
        return ans;
    }

    // have 4 dots, we will remove the final dot if its actually the end of the string that we have reached. we need to make sure the last seq is also valid
    // we will put a dot after each valid subsection
    void dfs(string s, int idx, string cur, vector<string> & ans, int numdots) {
        if (idx == s.size()) {
            if (numdots == 4) {
                cur.pop_back(); // remove the final dot
                ans.push_back(cur);
            }
            return;
        }
        if (numdots == 4) return;


        // only need to check 3 adjacent ones at a time
        if (s[idx] == '0') {
            dfs(s, idx + 1, cur + "0.", ans, numdots + 1); // if we are at a 0, we have to take the 0 as is
        } else {
            string seq = "";
            for (int i = idx; i < min(idx + 3, int(s.size())); i++) {
                seq += s[i];
                if (stoi(seq) <= 255) {
                    dfs(s, i + 1, cur + seq + '.', ans, numdots + 1);
                }
            }
        }

    }
};

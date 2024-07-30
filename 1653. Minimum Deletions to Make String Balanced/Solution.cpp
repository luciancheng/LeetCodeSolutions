class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> a_count(n, 0);
        vector<int> b_count(n, 0);

        if (s[0] == 'a') a_count[0] = 1;
        else b_count[0] = 1;
        for (int i = 1; i < n; i++) {
            bool isA = s[i] == 'a';
            a_count[i] = a_count[i-1] + 1 * isA;
            b_count[i] = b_count[i-1] + 1 * (!isA); 
        }
        
        int totalA = a_count[n - 1];

        int ans = totalA;
        for (int i = 0; i < n; i++) {
            int b_toleft = b_count[i];
            int a_toright = totalA - a_count[i];
            ans = min(ans, b_toleft + a_toright);
        }

        return ans;
    }
};

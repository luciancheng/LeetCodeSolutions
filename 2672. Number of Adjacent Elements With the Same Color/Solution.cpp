class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        if (n == 1) return vector<int>(queries.size(), 0);

        vector<int> colors(n, 0);
        vector<int> ans;
        ans.push_back(0); // always have 0 for the number of pairs for the first initial query
        colors[queries[0][0]] = queries[0][1];

        for (int i = 1; i < queries.size(); i++) {
            int idx = queries[i][0];
            int color = queries[i][1];
            int numPairs = ans[i-1];
            // check adjacent values and modify the preexisting number of pairs based on what happens when we change the color
            // removes need to iterate through the colors vector each time
            int adj1;
            int currentColor = colors[idx];
            if (idx == 0) {
                adj1 = colors[idx + 1];
                if (adj1 != 0) {
                    int before = (currentColor == adj1) ? 1 : 0;
                    int after = (color == adj1) ? 1 : 0;
                    numPairs += after - before;  
                }
                colors[idx] = color;
            } else if (idx == colors.size() - 1) {
                adj1 = colors[idx - 1];
                if (adj1 != 0) {
                    int before = (currentColor == adj1) ? 1 : 0;
                    int after = (color == adj1) ? 1 : 0;
                    numPairs += after - before;  
                }
                colors[idx] = color;
            } else {
                int before = 0, after = 0;

                for (int j = idx - 1; j < idx + 1; j++) {
                    if (colors[j] == colors[j+1] && colors[j] != 0) before++;
                }
                colors[idx] = color;

                for (int j = idx - 1; j < idx + 1; j++) {
                    if (colors[j] == colors[j+1] && colors[j] != 0) after++;
                }
                numPairs += after - before;
            }
            ans.push_back(numPairs);
        }
         return ans;
    }
};

class Solution {
public:
    string foreignDictionary(vector<string>& words) {
        // create a directed graph, do a topological sort afterwards
        // a lower order letter will point to one that is higher, ie. a -> b, b -> c
        
        // create an adjaceny list for the directed graph
        unordered_map<char, vector<bool>> adj;
        unordered_map<char, int> inDegrees;

        // populate first
        for (const string & word : words) {
            for (const char & i : word) {
                if (adj.count(i) == 0) {
                    adj[i] = vector<bool>(26, 0);
                    inDegrees[i] = 0;
                }
            }
        }

        
        for (int i = 0; i < words.size() - 1; i++) {
            // compare each pair of words to find out why this word is less than the other, stop at the first time we see a different letter
            string word1 = words[i];
            string word2 = words[i + 1];

            int j = 0;

            while (j < min(word1.size(), word2.size()) && word1[j] == word2[j]) {
                j++;
            }

            if (j == word1.size()) continue;
            if (j == word2.size()) return ""; // impossible letter combination

            char src = word1[j];
            char dst = word2[j];

            if (!adj[src][dst - 'a']) inDegrees[dst]++;

            adj[src][dst - 'a'] = true; // there is a directed edge from src to dst
        }

        // Topological sort - khans algorithm
        queue<char> q;
        for (const auto & i: inDegrees) {
            if (i.second == 0) {
                q.push(i.first);
            }
        }

        if (q.size() == inDegrees.size() && q.size() != 1) return "";

        string ans = "";
        while (!q.empty()) {
            char cur = q.front();
            q.pop();
            ans = ans + cur;

            vector<bool> nextLetters = adj[cur];
            for (int i = 0; i < 26; i++) {
                if (nextLetters[i]) {
                    char next = i + 'a';
                    inDegrees[next]--;
                
                    if (inDegrees[next] == 0) {
                        q.push(next);
                    }
                }
            }
        }

        if (ans.size() != adj.size()) return ""; // found a cycle in the graph

        return ans;
    }
};

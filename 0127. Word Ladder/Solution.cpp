class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        // construct adjacency list
        // need efficieny way to check which words differ by one letter over and over again
        int n = wordList.size();
        unordered_map<string, vector<string>> adj;
        for (int i = -1; i < n; i++) {
            string curWord;

            if (i < 0) {
                curWord = beginWord;
            } else {
                curWord = wordList[i];
            }

            for (int j = i + 1; j < n; j++) {
                string checkWord = wordList[j];
                if (oneDifferent(curWord, checkWord)) {
                    adj[curWord].push_back(checkWord);
                    adj[checkWord].push_back(curWord);
                }
            }
        }
        // run a bfs until we reach the end word and count the number of levels we went through
        // if end word isnt in the list, then we can return 0
        // dont need dijkstras since every edge has equal weight of 1
        unordered_set<string> visited;
        queue<string> q;
        q.push(beginWord);
        visited.insert(beginWord);

        int ans = 0;
        while (!q.empty()) {
            int qsize = q.size();
            ans++;
            for (int _ = 0; _ < qsize; _++) {
                string front = q.front();
                q.pop();

                if (front == endWord) return ans;

                for (const string & nextWord : adj[front]) {
                    if (visited.count(nextWord) == 0) {
                        q.push(nextWord);
                        visited.insert(nextWord);
                    }
                }
            }
        }

        return 0;
    }

    bool oneDifferent(string s1, string s2) {
        int numDiffs = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) numDiffs++;
            if (numDiffs > 1) return false;
        }
        return numDiffs == 1;
    }
};

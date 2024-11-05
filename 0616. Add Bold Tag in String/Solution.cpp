class PrefixTree {
    public:
    unordered_map<char, PrefixTree*> letters;
    bool isWord = false;
    PrefixTree() {

    }

    void addWord(string word) {
        PrefixTree * cur = this;
        for (const char & letter : word) {
            if (cur->letters.count(letter) == 0) {
                cur->letters[letter] = new PrefixTree();
            }
            cur = cur->letters[letter];
        }
        cur->isWord = true;
    }

};

class Solution {
public:
    string addBoldTag(string s, vector<string>& words) {
        // consecutive bolding should be condensed
        // nested bolding should be considered 1 bold also
        // find a list of all intervals that are valid for borders, then

        // generate prefix tree
        PrefixTree * trie = new PrefixTree();
        for (const string & word : words) {
            trie->addWord(word);
        }

        // n^2 solution, go through each index and match as many words as we can starting at every index until we get to the end, and save each interval
        vector<vector<int>> intervals;

        // get all intervals of valid words
        int n = s.size();
        for (int i = 0; i < n; i++) {
            PrefixTree * cur = trie;
            for (int j = i; j < n; j++) {
                char letter = s[j];

                if (cur->letters.count(letter) != 0) {
                    cur = cur->letters[letter];
                } else {
                    break; // stop checking this loop 
                }

                if (cur->isWord) {
                    intervals.push_back({i, j});
                }
            }
        }

        // sort intervalss then merge
        sort(intervals.begin(), intervals.end());

        // merge overlapping intervals
        // adjacent intervals get put together
        int m = intervals.size();
        if (m == 0) return s; // no places to bold

        // merge intervals
        vector<vector<int>> mergedIntervals;

        mergedIntervals.push_back(intervals[0]);

        for (int i = 1; i < m; i++) {
            int size = mergedIntervals.size();
            vector<int> cur = intervals[i];

            // if overlap, merge it, also overlap if adjacent, [1,2], [3,4] -> [1,4]
            if (mergedIntervals[size - 1][1] + 1 >= cur[0]) {
                mergedIntervals[size - 1][1] = max(mergedIntervals[size - 1][1], cur[1]);
            } else {
                mergedIntervals.push_back(cur);
            }
        }

        // join results
        string res = "";
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (j < mergedIntervals.size() && mergedIntervals[j][0] == i) {
                // take substring and put brackets around
                int start = mergedIntervals[j][0];
                int end = mergedIntervals[j][1];

                int size = end - start + 1;

                string sub = s.substr(start, size);

                res += "<b>" + sub + "</b>";

                i = end;
                j++;
            } else {
                res += s[i];
            }
        }

        return res;
    }
};

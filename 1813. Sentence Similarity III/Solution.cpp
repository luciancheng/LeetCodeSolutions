class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        // have a left and right pointer to find the longest common prefix and suffix
        // if the l and r pointers match on where they break for one of the words, that means that there is a valid sentence that can be added
        // one string must be fully covered by the traversal of the pointers to be considered valid, this means that in the otehr string, there is a joint sentence that can be inserted somewhere in beteween the 2 pointer limits
        if (sentence1 == sentence2) return true;
        string s;
        stringstream ss(sentence1);
        vector<string> s1;
        vector<string> s2;
        while (getline(ss, s, ' ')) {
            s1.push_back(s);
        }

        ss = stringstream(sentence2);

        while (getline(ss, s, ' ')) {
            s2.push_back(s);
        }

        int l = -1;
        int r = -1;

        int n1 = s1.size();
        int n2 = s2.size();

        //position l pointer at the last point where theya re similar
        while (l < min(n1, n2) - 1 && s1[l + 1] == s2[l + 1]) {
            l++;
        }

        while (r < min(n1, n2) - 1 && l + 1 < min(n1, n2) - r - 1 && s1[n1 - (r + 1) - 1] == s2[n2 - (r + 1) - 1]) {
            r++;
        }


        // check if the indices are right next ot each other, meaning that its valid
        if (l + 1 == min(n1, n2) - 1 - r) return true;


        return false;
    }
};

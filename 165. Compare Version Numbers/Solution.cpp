class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> tokens1;
        vector<int> tokens2;
            
        stringstream check1(version1);
        stringstream check2(version2);
            
        string intermediate;
        while(getline(check1, intermediate, '.')){
            tokens1.push_back(stoi(intermediate));
        }
        while(getline(check2, intermediate, '.')) {
            tokens2.push_back(stoi(intermediate));
        }

        int i = 0;
        while(i < min(tokens1.size(), tokens2.size())) {
            if (tokens1[i] > tokens2[i]) {
                return 1;
            } else if (tokens1[i] < tokens2[i]) {
                return -1;
            }
            i++;
        }

        if (tokens1.size() > tokens2.size()) {
            while (i < tokens1.size()) {
                if (tokens1[i] != 0) return 1;
                i++;
            }
        } else if (tokens1.size() < tokens2.size()) {
            while (i < tokens2.size()) {
                if (tokens2[i] != 0) return -1;
                i++;
            }
        }

        return 0;
    }
};

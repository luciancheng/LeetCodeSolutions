class Solution {
public:
    string numberToWords(int num) {
        unordered_map<int, string> letterMap = {{0 , ""}, {1 , "One"}, {2 , "Two"}, {3 , "Three"}, {4 , "Four"}, {5 , "Five"}, {6 , "Six"}, {7 , "Seven"}, {8 , "Eight"}, {9 , "Nine"}, {10 , "Ten"}, {11 , "Eleven"}, {12 , "Twelve"}, {13 , "Thirteen"}, {14 , "Fourteen"}, {15 , "Fifteen"}, {16 , "Sixteen"}, {17 , "Seventeen"}, {18 , "Eighteen"}, {19 , "Nineteen"}, {20 , "Twenty"}, {30 , "Thirty"}, {40 , "Forty"}, {50 , "Fifty"}, {60 , "Sixty"}, {70 , "Seventy"}, {80 , "Eighty"}, {90 , "Ninety"}};

        unordered_map<int, string> mp = {{0 , ""}, {1 , "Thousand"}, {2 , "Million"}, {3 , "Billion"}, {4 , "Trillion"}, {5 , "Quadrillion"}, {6 , "Quintillion"}, {7 , "Sextillion"}};
        if (num == 0) return "Zero";
        string res = recur(num, mp, 0, letterMap);
        res.pop_back();
        return res;
    }

    string recur(int num, unordered_map<int, string> & mp, int thousandCount, unordered_map<int, string> & letterMap) {
        // do 3 digits at a time
        if (num == 0) return "";
        int count = 0;
        int prevDig;
        stack<string> st;
        string res = "";
        while (num > 0 && count < 3) {
            count++;

            int curDig = num % 10;
            num /= 10;

            if (count == 1) {
                if (curDig > 0) {
                    st.push(letterMap[curDig]);
                }
                prevDig = curDig;
            } else if (count == 2) {
                int newNum = curDig * 10;
                if (curDig == 1) { // do teens
                    if (prevDig != 0) {
                        st.pop();
                    }
                    st.push(letterMap[newNum + prevDig]);
                } else if (curDig >= 2 && curDig <= 9) { // tys
                    st.push(letterMap[newNum]);
                } // dont do anything if its a 0
            } else {
                if (curDig != 0) st.push(letterMap[curDig] + " Hundred");
            }
        }

        while (!st.empty()) {
            res = res + st.top() + " ";
            st.pop();
        }
        if (thousandCount > 0 && res.length() > 0) res += mp[thousandCount] + " ";

        return recur(num, mp, thousandCount + 1, letterMap) + res;
    }
};

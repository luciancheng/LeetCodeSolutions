class Solution {
public:
    int minSwaps(string s) {
        // half will be [ and half will be ]
        int n = s.size();
        // want minimum swaps to get it so that the brakcets are valid
        // to check for validity, we can use a stack
        int count = 0; // count the number of open brackets and closed brackets, closed brackets will -1, open will +1, if we ever go below 0, this means we have an outstanding closing, and we must make a swap

        int swapidx = n;
        int swaps = 0;

        auto findLastOpen = [&]() -> void {
            swapidx--;
            while (s[swapidx] != '[') swapidx--;
        };

        findLastOpen();

        for (int i = 0; i < n; i++) {
            if (s[i] == '[') {
                count++;
            } else {
                count--;
                if (count < 0) {
                    swap(s[i], s[swapidx]);
                    findLastOpen();
                    count = 1;
                    swaps++;
                }
            }
        }

        return swaps;
    }
};

class Solution {
public:
    string reorganizeString(string s) {
        // we can be greedy in how we want to palce the strings
        unordered_map<char, int> count;
        for (const char & i : s) {
            count[i]++;
        }

        // count how many remaining letters we have to place
        int remainingLetters = s.size();

        string res = "";
        vector<pair<int, char>> heap; // heap {remaining count, letter}, use a max heap since we want to use the letters we have the most of first, be greedy here
        for (const auto [letter, cnt] : count) {
            heap.push_back({cnt, letter});
        }

        // make a heap
        make_heap(heap.begin(), heap.end()); // O(n)

        pair<int, char> prevletter = {0, ' '};

        // while loop will end if the heap is ever empty, heap will be empty in 2 occasions, 1 when all the letters are placed, or 2 there is going to have to be 2 letters placed adjacent because there is only 1 letter remaining since we will pop it and save it
        while (!heap.empty()) {
            // be greedy and place the letter with the highest count
            auto [cnt, letter]  = heap[0];
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();

            // place the letter
            res += letter;
            cnt--;

            // decrement the remaining letters
            remainingLetters--;

            // place the previously used letter from the previous iteration back into the heap
            // if the previous letter used has a count of 0, then that means we dont need to add this back onto the heap since we used up all these letters already
            if (prevletter.first > 0) {
                heap.push_back(prevletter);
                push_heap(heap.begin(), heap.end());
            }
            
            // set this as the previous letter that we will add back to the heap on the next iteration of the loop since we cant have adjacent letters
            prevletter = {cnt, letter};
        }

        // if our heap is ever empty and we havent used all the letters, then there is a problem
        if (remainingLetters != 0) return "";
        return res;
    }
};

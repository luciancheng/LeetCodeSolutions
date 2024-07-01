class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(), stones.end());
        while (stones.size() > 1) {    
            int y = stones[0];
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            int x = stones[0];
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();

            if (y > x) {
                y -= x;
                stones.push_back(y);
                push_heap(stones.begin(), stones.end());
            }
        }

        if (stones.size() == 1) return stones[0];
        return 0;
    }
};
